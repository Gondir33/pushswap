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

int	min_max(t_stack *a, t_stack *b, int find_min)
{
	if (find_min)
	{
		while (a)
		{
			if (a->index < b->index)
				return (0);
			a = a->next;
		}
	}
	else
	{
		while (a)
		{
			if (a->index > b->index)
				return (0);
			a = a->next;
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

static int	get_pos(t_stack *a, int index_b)
{
	int		pos;
	t_stack	*tmp;
	t_stack	*last;

	pos = 0;
	last = a;
	tmp = a;
	while (last->next)
		last = last->next;
	if (!(a && !(index_b < a->index && index_b > last->index)))
	{
		pos++;
		a = a->next;
	}
	while (a && !(index_b < a->index && index_b > tmp->index))
	{
		pos++;
		a = a->next;
		tmp = tmp->next;
	}
	return (pos);
}

void	sm_push(t_stack **a, t_stack **b)
{
	if (min_max(*a, *b, 1))
	{
		sort_a(a);
		pa(b, a);
	}
	else if (min_max(*a, *b, 0))
	{
		sort_a(a);
		pa(b, a);
		ra(a);
	}
	else
	{
		sm_rotate_a(a, get_pos(*a, (*b)->index));
		pa(b, a);
	}
}

void	sort_a(t_stack **a)
{
	int		count;
	t_stack	*tmp;

	count = 0;
	tmp = *a;
	while (tmp)
	{
		if (min_max(*a, tmp, 1))
			break ;
		count++;
		tmp = tmp->next;
	}
	sm_rotate_a(a, count);
}