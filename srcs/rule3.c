/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:10:10 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 12:59:41 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rra(t_stack **a)
{
	s_reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	s_reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	s_reverse_rotate(a);
	s_reverse_rotate(b);
	write(1, "rrr\n", 4);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_pow_ten(int n)
{
	int	i;
	int	pow;

	pow = 1;
	i = 0;
	while (i < n)
	{
		pow = 10 * pow;
		i++;
	}
	return (pow);
}
