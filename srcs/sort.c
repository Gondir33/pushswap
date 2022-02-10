/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:30:42 by sbendu            #+#    #+#             */
/*   Updated: 2022/02/10 12:01:51 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	start_sorting(t_stack *a, t_stack *b, int n)
{
	if (n <= 5)
		sort_small(a, b, n);
	else
		sort_big(a, b, n);
}

// void	output_stack(t_stack *top)
// {
// 	printf("stack:\n");
// 	while(top)
// 	{
// 		printf("num:%d index:%d\n", top->d, top->index);
// 		top = top->next;
// 	}
// 	printf("\n");
// }