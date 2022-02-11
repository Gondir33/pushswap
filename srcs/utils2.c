/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:59:18 by sbendu            #+#    #+#             */
/*   Updated: 2022/02/12 00:52:07 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	get_util_arg(char *s, int *i, t_stack *top)
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
			ft_exit(top, 1);
		}
	}
	return (arg);
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

void	ft_exit(t_stack *top, int exit_suck)
{
	t_stack	*tmp;

	tmp = top;
	if (tmp == NULL)
		exit(exit_suck);
	else
		top = top->next;
	while (top)
	{
		free(tmp);
		tmp = top;
		top = top->next;
	}
	free(tmp);
	exit(exit_suck);
}
