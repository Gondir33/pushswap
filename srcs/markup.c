/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   markup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:29:39 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 19:07:57 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	find_best_markup_by_index(t_stack *a, t_stack_info *info)
{
	t_stack *t;
	int	n;
	int	i;
	int	max;
	int	imin;

	max = 0;
	imin = 2147483647;
	while (a)
	{
		n = 0;
		t = a;
		i = t->index;
		while (t)
		{
			if (i == t->index)
			{
				i++;
				n++;
			}
			t = t->next;
		}
		if (max < n )
		{
			info->markup_top = a;
			max = n;
			if (imin > i)
				imin = i;
		}
		else if (max == n && imin > i)
		{
			info->markup_top = a;
			max = n;
			imin = i;
		}
		a = a->next;
	}
}

void	set_keepindex(t_stack *a, t_stack_info *info)
{
	int	i;

	i = 0;
	while (a != info->markup_top)
	{
		a->keep_in_stack = 0;
		a = a->next;
	}
	i = a->index;
	while (a)
	{
		if (i == a->index)
		{
			a->keep_in_stack = 1;
			i++;
		}
		else
			a->keep_in_stack = 0;
		a = a->next;
	}
}
