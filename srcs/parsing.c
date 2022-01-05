/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:57:04 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/04 16:57:04 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	stack_is_dup(t_stack *top)
{
	t_stack	*sec;
	t_stack	*fir;

	fir = top;
	while (fir->next)
	{
		sec = fir->next;
		while (sec)
		{
			if (sec->d == fir->d)
				return (0);
			sec = sec->next;
		}
		fir = fir->next;
	}
	return (1);
}

int	get_arg(char *s, int *i)
{
	int	flag;
	int	arg;
	int	n;

	flag = 1;
	arg = get_util_arg(s, i);
	if (s[*i] == '-')
	{
		flag = -1;
		(*i)--;
	}
	else if (s[*i] == '+' )
		(*i)--;
	return (arg * flag);
}

void	ft_parse(char *s, t_stack **top)
{
	int	len;

	len = ft_strlen(s) - 1;
	while (len >= 0)
	{
		s_making_stack(get_arg(s, &len), top);
		if (!stack_is_dup(*top))
		{
			write(1, "Error\n", 6);
			exit (EXIT_FAILURE);
		}
		if (len < 0)
			break ;
		if (s[len] != ' ')
		{
			write(1, "Error\n", 6);
			exit (EXIT_FAILURE);
		}
		len--;
	}
}

int	a_is_sorted(t_stack *top, int *n)
{
	int		flag;
	t_stack	*first;
	t_stack	*second;

	flag = 0;
	first = top;
	second = top->next;
	while (second)
	{
		if (first->d >= second->d)
			flag = 1;
		(*n)++;
		first = first->next;
		second = second->next;
	}
	return (flag);
}

int	main(int argc, char **argv)
{
	t_stack	*topa;
	int		n;
	t_stack	*topb;

	n = 1;
	topa = NULL;
	topb = NULL;
	if (argc != 2)
		return (1);
	ft_parse(argv[1], &topa);
	if (!a_is_sorted(topa, &n))
	{
		write(1, "A have already sorted\n", 22);
		exit (0);
	}
	start_sorting(topa, topb);
}
