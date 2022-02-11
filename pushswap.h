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

typedef struct s_stack
{
	int				d;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	s_making_stack(int d, t_stack **top);
int		s_swap(t_stack **top);
int		s_push(t_stack **from, t_stack **to);
int		s_rotate(t_stack **top);
int		s_reverse_rotate(t_stack **top);
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
int		ft_pow_ten(int n);
int		ft_strlen(char *s);
int		get_util_arg(char *s, int *i, t_stack *top);
void	start_sorting(t_stack *a, t_stack *b, int size);
void	sort_big(t_stack **a, t_stack **b, int n);
int		smart_rotate_b(t_stack **a, t_stack **b);
int		size_stack(t_stack *top);
void	index_for_stack(t_stack *atop, int size);
void	sm_push(t_stack **a, t_stack **b);
void	sort_a(t_stack **a);
void	sort_small(t_stack **a, t_stack **b, int n);
void	ft_exit(t_stack *a, int exit_suck);

#endif
