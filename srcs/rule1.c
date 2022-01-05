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
	s_swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	s_swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	s_swap(a);
	s_swap(b);
	write(1, "ss\n", 3);
}

void	pa(t_stack **b, t_stack **a)
{
	s_push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	s_push(a, b);
	write(1, "pb\n", 3);
}
