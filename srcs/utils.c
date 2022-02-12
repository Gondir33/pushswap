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
	new->d = d;
	if (!*top)
	{
		new->next = NULL;
		*top = new;
	}
	else
	{
		new->next = *top;
		*top = new;
	}
}

int	s_swap(t_stack **top)
{
	t_stack	*tmp;

	if (!top)
		return (1);
	if (!*top)
		return (1);
	else if ((*top)->next == NULL)
		return (1);
	tmp = *top;
	*top = (*top)->next;
	tmp->next = (*top)->next;
	(*top)->next = tmp;
	return (0);
}

int	s_push(t_stack **from, t_stack **to)
{
	t_stack	*tmp1;

	if (!(*from))
		return (1);
	if (!(*to))
	{
		tmp1 = *from;
		(*from) = (*from)->next;
		*to = tmp1;
		(*to)->next = NULL;
		return (0);
	}
	tmp1 = *from;
	(*from) = (*from)->next;
	tmp1->next = *to;
	(*to) = tmp1;
	return (0);
}

int	s_rotate(t_stack **top)
{
	t_stack	*end;
	t_stack	*tmp;

	if (!*top)
		return (1);
	if ((*top)->next == NULL)
		return (1);
	end = *top;
	*top = (*top)->next;
	tmp = *top;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = end;
	end->next = NULL;
	return (0);
}

int	s_reverse_rotate(t_stack **top)
{
	t_stack	*fir;
	t_stack	*tmp;

	if (!*top)
		return (1);
	if ((*top)->next == NULL)
		return (1);
	fir = *top;
	while ((*top)->next->next)
		*top = (*top)->next;
	tmp = (*top);
	*top = (*top)->next;
	(*top)->next = fir;
	tmp->next = NULL;
	return (0);
}
