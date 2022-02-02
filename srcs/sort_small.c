/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:56:48 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 12:50:43 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sort_3(t_stack *a)
{
	int	arr[3];

	arr[0] = a->d;
	arr[1] = a->next->d;
	arr[2] = a->next->next->d;
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
		sa(&a);
	else if (arr[0] > arr[1] && arr[1] > arr[2] && arr[2] < arr[0])
	{
		sa(&a);
		rra(&a);
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] < arr[0])
		ra(&a);
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] > arr[0])
	{
		sa(&a);
		ra(&a);
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] < arr[0])
		rra(&a);
}

void	sort_less_5(t_stack *a, t_stack *b, int n)
{
	if (n == 5)
		pb(&a, &b);
	pb(&a, &b);
	sort_3(a);
	if (n == 5)
		

}

void	sort_small(t_stack *a, t_stack *b, int n)
{
	if (n == 2)
	{
		if (a->d > a->next->d)
			sa(&a);
	}
	else if (n == 3)
		sort_3(a);
	else
		sort_less_5(a, b, n);
}