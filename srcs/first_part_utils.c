/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_part_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:26:56 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 22:22:52 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	len_the_way_max(t_stack *a, t_stack *b, int *flag)
{
	int	i;
	int	j;
	int	last_of_a;

	i = 0;
	j = 0;
	last_of_a = number_last_index(a);
	while (b->index != last_of_a + 1)
	{
		i++;
		b = b->next;
	}
	while (b)
	{
		j++;
		b = b->next;
	}
	if (i > j)
	{
		*flag =-1;
		return (j);
	}
	*flag = 1;
	return (i);
}

int	get_min_index(t_stack *a)
{
	int	min;

	min = 2147483647;
	while (a)
	{
		if (a->index < min)
			min = a->index;
		a = a->next;
	}
	return (min);
}

int find_min_index(t_stack *a, int *flag)
{
	int		len1;
	int		len2;
	int		min_index;

	len1 = 0;
	len2 = 0;
	min_index = get_min_index(a);
	while (a->index != min_index)
	{
		len1++;
		a = a->next;
	}
	while (a)
	{
		len2++;
		a = a->next;
	}
	if (len1 > len2)
		*flag = -1;
	else
		*flag = 1;
	return (min_index);
}