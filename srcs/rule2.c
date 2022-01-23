/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:07:11 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 14:35:39 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ra(t_stack **a)
{
	s_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	s_rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	s_rotate(a);
	s_rotate(b);
	write(1, "rr\n", 3);
}

int	get_util_arg(char *s, int *i)
{
	int	arg;
	int	n;

	arg = 0;
	n = 0;
	while (s[*i] >= '0' && s[*i] <= '9')
	{
		arg = arg + (s[*i] - '0') * ft_pow_ten(n);
		(*i)--;
		n++;
		if (arg < 0)
		{
			write(1, "Error\n", 6);
			exit (1);
		}
	}
	return (arg);
}
