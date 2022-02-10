/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:56:48 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 12:50:43 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	size_stack(t_stack *top)
{
	int	i;

	i = 0;
	while(top)
	{
		top = top->next;
		++i;
	}
	return (i);
}

int	try_push_next(t_stack **a, t_stack **b, int size, int swap)
{
	if ((*b)->index == size - 2 && !swap)
	{
		pa(b, a);
		return (1);
	}
	return (0);
}

int	smart_rotate_b(t_stack **a, t_stack **b)
{
	int		cnt;
	int 	size;
	t_stack	*tmp;
	int		swap;

	cnt = 0;
	size = size_stack(*b);
	swap = 0;
	tmp = *b;
	while (tmp->index != size - 1 && ++cnt)
		tmp = tmp->next;
	while((*b)->index != size - 1)
	{
		if (!try_push_next(a, b, size, swap))
		{
			if (cnt > size / 2)
				rrb(b);
			else
				rb(b);
		}
		else
			swap = 1;
	}
	return (swap);
}