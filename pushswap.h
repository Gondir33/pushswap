/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:57:26 by sbendu            #+#    #+#             */
/*   Updated: 2022/01/04 16:57:26 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int				d;
	int				index;
	int				keep_in_stack;
	struct s_stack	*next;
}	t_stack;

typedef struct s_stack_info
{
	t_stack	*markup_top;
	t_stack	*top;
	int		size;
}	t_stack_info;


void	s_making_stack(int d, t_stack **top);
void	s_swap(t_stack **top);
void	s_push(t_stack **from, t_stack **to);
void	s_rotate(t_stack **top);
void	s_reverse_rotate(t_stack **top);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	start_sorting(t_stack **a, t_stack **b, int size);
int		ft_strlen(char *s);
int		ft_pow_ten(int n);
int		get_util_arg(char *s, int *i);
void	find_best_markup_by_index(t_stack *a, t_stack_info *info);
void	set_keepindex(t_stack *a, t_stack_info *info);
int		comparesum(int sum1, int sum2, t_stack **a, t_stack_info *info);
int		sa_is_need(t_stack **a, t_stack_info *info);
int		index_check(t_stack *a);
int		len_the_way_max(t_stack *a, t_stack *b, int *flag);
void	index_for_stack(t_stack *atop, int size);
int		*sort_array(int *a, int size);
int		*make_array(int *a, t_stack *atop, int size);
void	first_part(t_stack *a, t_stack *b, t_stack_info *info);
int		number_last_index(t_stack *a);
int		size_of_s(t_stack *a);
int		len_the_way_min(t_stack *a, t_stack *b, int *flag);
void	second_part(t_stack *a, t_stack *b, t_stack_info *info);
void	output_stack(t_stack *top);
int find_min_index(t_stack *a, int *flag);

#endif
