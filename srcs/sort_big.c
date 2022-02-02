/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:56:48 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 12:50:43 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	push_in_chunks(t_stack **a, t_stack **b, int chunk_size)
{
	int	chunk_num;
	int	num;

	chunk_num = 1;
	num = 0;
	while (*a)
	{
		if ((*a)->index < (chunk_size * chunk_num))
		{
			pb(a, b);
			if ((*b)->index < chunk_size * chunk_num - (chunk_size / 2))
				rb(b);
			num++;
		}
		else
			ra(a);
		if (num == chunk_size * chunk_num)
			chunk_num++;
	}
}

void	push_back(t_stack **a, t_stack **b)
{
	while(*b)
	{
		if (smart_rotate_b(a, b))
		{
			pa(b, a);
			if ((*b)->next != NULL && (*b)->index < (*b)->next->index)
				ss(a, b);
			else
				sa(a);
		}
		else
			pa(b, a);
	}
}

void	sort_big(t_stack *a, t_stack *b, int n)
{
	int	chunk_size;

	chunk_size = n / 12 + 22;
	push_in_chunks(&a, &b, chunk_size);
	push_back(&a, &b);
}