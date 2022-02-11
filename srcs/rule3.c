/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:10:10 by sbendu            #+#    #+#             */
/*   Updated: 2022/02/11 20:00:05 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rra(t_stack **a)
{
	if (s_reverse_rotate(a))
		return ;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	if (s_reverse_rotate(b))
		return ;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	if (s_reverse_rotate(a) || s_reverse_rotate(b))
		return ;
	write(1, "rrr\n", 4);
}
