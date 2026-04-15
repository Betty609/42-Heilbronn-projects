/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:00:45 by bgebreeg          #+#    #+#             */
/*   Updated: 2026/01/13 16:57:51 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

/* parsing */
void	parse_args(int ac, char **av, t_stack **a);
long	ft_atol(const char *str);
int		ft_isdigit(int c);

/* errors */
void	error_exit(void);

/* stack */
t_stack	*stack_new(int value);
void	stack_add_back(t_stack **s, t_stack *new);
t_stack	*stack_last(t_stack *s);
int		stack_size(t_stack *s);
void	free_stack(t_stack **s);

/* utils */
int		is_sorted(t_stack *a);
int		find_min_pos(t_stack *a);
int		find_max_index_pos(t_stack *b);

/* indexing */
void	index_stack(t_stack *a);

/* operations */
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

/* sorting */
void	sort_small(t_stack **a, t_stack **b);
void	sort_chunk(t_stack **a, t_stack **b);

#endif
