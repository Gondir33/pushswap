/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:56:48 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 12:50:43 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sa(t_stack **a)
{
	if (s_swap(a))
		return ;
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	if (s_swap(b))
		return ;
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	if (s_swap(a) || s_swap(b))
		return ;
	write(1, "ss\n", 3);
}

void	pa(t_stack **b, t_stack **a)
{
	if (s_push(b, a))
		return ;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	if (s_push(a, b))
		return ;
	write(1, "pb\n", 3);
}
