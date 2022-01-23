/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:04:56 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 21:19:42 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	*make_array(int *a, t_stack *atop, int size)
{
	int	i;

	i = 0;
	a = (int *)malloc(sizeof(int) * size);
	if (!a)
		exit(1);
	while (i < size)
	{
		a[i] = atop->d;
		atop = atop->next;
		i++;
	}
	return (a);
}

int	*sort_array(int *a, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (a[i] >= a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
			j++;
		}
		i++;
	}
	return (a);
}

void	index_for_stack(t_stack *atop, int size)
{
	int		*a;
	int		i;
	t_stack	*fir;

	i = 0;
	a = make_array(a, atop, size);
	a = sort_array(a, size);
	while (i < size)
	{
		fir = atop;
		while (fir)
		{
			if (a[i] == fir->d)
			{
				fir->index = i;
				break ;
			}
			fir = fir->next;
		}
		i++;
	}
	free(a);
	a = NULL;
}
