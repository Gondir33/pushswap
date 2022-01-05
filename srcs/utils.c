/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:57:17 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/04 16:57:17 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	s_making_stack(int d, t_stack **top)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		exit(1);
	new->next = NULL;
	new->d = d;
	if (!*top)
		*top = new;
	else
	{
		new->next = *top;
		*top = new;
	}
}

void	s_swap(t_stack **top)
{
	t_stack	*tmp;

	if (!*top)
		return ;
	else if ((*top)->next == NULL)
		return ;
	tmp = *top;
	*top = (*top)->next;
	tmp->next = (*top)->next;
	(*top)->next = tmp;
}

void	s_push(t_stack **from, t_stack **to)
{
	t_stack	*tmp1;

	if (!(*from))
		return ;
	if (!(*to))
	{
		tmp1 = *from;
		(*from) = (*from)->next;
		*to = tmp1;
		(*to)->next = NULL;
		return ;
	}
	tmp1 = *from;
	(*from) = (*from)->next;
	tmp1->next = *to;
	(*to) = tmp1;
}

void	s_rotate(t_stack **top)
{
	t_stack	*end;
	t_stack	*tmp;

	end = *top;
	*top = (*top)->next;
	tmp = *top;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = end;
	end->next = NULL;
}

void	s_reverse_rotate(t_stack **top)
{
	t_stack	*fir;
	t_stack	*tmp;

	fir = *top;
	while ((*top)->next->next)
		*top = (*top)->next;
	tmp = (*top);
	*top = (*top)->next;
	(*top)->next = fir;
	tmp->next = NULL;
}
