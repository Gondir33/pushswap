/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:56:48 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 12:50:43 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	min_max(t_stack *top, t_stack *elem, int find_max)
{
	if (find_max == 0)
	{
		while (top)
		{
			if (top->index > elem->index)
				return (0);
			top = top->next;
		}
	}
	else
	{
		while (head)
		{
			if (top->index > elem->index)
				return (0)
			top = top->next;
		}
	}
	return (1);
}

void	sm_rotate_a(t_stack **a, int n)
{
	if (n > size_stack(*a))
	{
		n = size_stack(*a) - n;
		while (n--)
			rra(a);
	}
	else
		while (n--)
			ra(a);
}

int	get_pos(t_stack *top, int index)
{
	int	pos;
	int	prev_index;

	pos = 0;
}

void	sm_push(t_stack **a, t_stack **b)
{
	if (min_max(*a, *b, 0))
	{
		sort_one(a);
		pa(b, a);
	}
	else if (min_max(*a, *b, 1))
	{
		sort_one(a);
		pa(b, a);
		ra(a);
	}
	else
	{
		sm_rotate_a();
		pa(a);
	}
}

void	sort_one(t_stack **a)
{
	int		count;
	t_stack	*tmp;

	count = 0;
	tmp = *a;
	while (tmp)
	{
		if (min_max(*a, tmp, 0))
			break ;
		cnt++;
		tmp = tmp->next;
	}
	sm_rotate_a(a, cnt);
}