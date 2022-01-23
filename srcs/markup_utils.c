/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   markup_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:50:42 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 21:44:20 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	comparesum(int sum1, int sum2, t_stack **a, t_stack_info *info)
{
	if (sum2 > sum1)
		return (0);
	else
	{
		s_swap(a);
		find_best_markup_by_index(*a, info);
		set_keepindex(*a, info);
		return (1);
	}
}

int	sa_is_need(t_stack **a, t_stack_info *info)
{
	int		sum1;
	int		sum2;
	t_stack	*fir;	
	t_stack	*sec;

	fir = *a;
	sum1 = 0;
	sum2 = 0;
	while (fir)
	{
		sum1 = fir->keep_in_stack + sum1;
		fir = fir->next;
	}
	s_swap(a);
	sec = *a;
	find_best_markup_by_index(sec, info);
	set_keepindex(sec, info);
	while (sec)
	{
		sum2 = sec->keep_in_stack + sum2;
		sec = sec->next;
	}
	return (comparesum(sum1, sum2, a, info));
}

int	index_check(t_stack *a)
{
	while (a)
	{
		if (a->keep_in_stack == 0)
			return (1);
		a = a->next;
	}
	return (0);
}