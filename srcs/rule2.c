/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:07:11 by sbendu            #+#    #+#             */
/*   Updated: 2022/02/11 19:59:47 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ra(t_stack **a)
{
	if (s_rotate(a))
		return ;
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	if (s_rotate(b))
		return ;
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	if (s_rotate(a) || s_rotate (b))
		return ;
	write(1, "rr\n", 3);
}
