/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:30:42 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 21:52:42 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	start_sorting(t_stack **a, t_stack **b, int size)
{
	t_stack_info	*info;

	info = malloc(sizeof(t_stack_info));
	if (!info)
		exit(1);
	info->top = *a;
	info->size = size;
	find_best_markup_by_index(*a, info);
	set_keepindex(*a, info);
	first_part(*a,*b, info);
}

void	output_stack(t_stack *top)
{
	printf("stack:\n");
	while(top)
	{
		printf("num:%d   index: %d\n", top->d, top->index);
		top = top->next;
	}
	printf("\n");
}
