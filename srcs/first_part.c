/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_part.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:15:39 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/05 22:19:51 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	first_part(t_stack *a, t_stack *b, t_stack_info *info)
{
	int	flag;
	int	ind;
	while(index_check(a))
	{
		if (sa_is_need(&a, info) == 0)
			write(1, "sa\n", 3);
		if (a->keep_in_stack == 0)
			pb(&a, &b);
		else
			ra(&a);
			// 		output_stack(a);
			// output_stack(b);
	}
	ind = find_min_index(a, &flag);
	if (flag == 1)
		while (a->index != ind)
			ra(&a);
	else if (flag == -1)
		while (a->index != ind)
			rra(&a);
	second_part(a, b, info);
}

int	number_last_index(t_stack *a)
{
	while (a->next)
		a = a->next;
	return (a->index);
}

int	size_of_s(t_stack *a)
{
	int	i;

	i = 0;
	while(a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	len_the_way_min(t_stack *a, t_stack *b, int *flag)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (b->index != a->index - 1)
	{
		i++;
		b = b->next;
	}
	while (b)
	{
		j++;
		b = b->next;
	}
	if (i > j)
	{
		*flag = -1;
		return (j);
	}
	*flag = 1;
	return (i);
}

void	second_part(t_stack *a, t_stack *b, t_stack_info *info)
{
	int		len1;
	int		len2;
	int		flag1;
	int		flag2;
	int		last_of_a;
	while (size_of_s(b))
	{
		len1 = 2147483647;
		len2 = 2147483647;
		last_of_a = number_last_index(a);
		if (a->index > 0)
			len1 = len_the_way_min(a, b, &flag1);
		if (last_of_a < info->size - 1)
			len2 = len_the_way_max(a, b, &flag2) + 1;
		if (len1 <= len2)
		{
			if (flag1 == 1)
			{
				while(b->index != a->index - 1)
					rb(&b);
			}
			if (flag1 == -1)
			{
				while(b->index != a->index - 1)
					rrb(&b);
			}
			pa(&b, &a);
		}
		else
		{
			if (flag1 == 1)
			{
				while(b->index != last_of_a + 1)
					rb(&b);
			}
			if (flag1 == -1)
			{
				while(b->index != last_of_a + 1)
					rrb(&b);
			}
			pa(&b, &a);
			ra(&a);
		}
	}
	// output_stack(a);
	exit(0);
}