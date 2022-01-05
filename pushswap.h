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
	struct s_stack	*next;
}	t_stack;

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
void	start_sorting(t_stack *a, t_stack *b);
int		ft_strlen(char *s);
int		ft_pow_ten(int n);
int		get_util_arg(char *s, int *i);




void	vivod_stack(t_stack *top);


#endif
