/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:52:50 by bgebreeg          #+#    #+#             */
/*   Updated: 2026/01/13 16:57:29 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a){t_stack*t;if(!*a||!(*a)->next)return;t=*a;*a=t->next;t->next=(*a)->next;(*a)->next=t;write(1,"sa\n",3);}
void	sb(t_stack **b){sa(b);write(1,"sb\n",3);}
void	ss(t_stack **a,t_stack **b){sa(a);sa(b);write(1,"ss\n",3);}
void	pa(t_stack **a,t_stack **b){t_stack*t;if(!*b)return;t=*b;*b=t->next;t->next=*a;*a=t;write(1,"pa\n",3);}
void	pb(t_stack **a,t_stack **b){pa(b,a);write(1,"pb\n",3);}
void	ra(t_stack **a){t_stack*f=*a,*l;if(!*a||!(*a)->next)return;l=stack_last(*a);*a=f->next;f->next=NULL;l->next=f;write(1,"ra\n",3);}
void	rb(t_stack **b){ra(b);write(1,"rb\n",3);}
void	rr(t_stack **a,t_stack **b){ra(a);ra(b);write(1,"rr\n",3);}
void	rra(t_stack **a){t_stack*p=NULL,*l=*a;if(!*a||!(*a)->next)return;while(l->next){p=l;l=l->next;}p->next=NULL;l->next=*a;*a=l;write(1,"rra\n",4);}
void	rrb(t_stack **b){rra(b);write(1,"rrb\n",4);}
void	rrr(t_stack **a,t_stack **b){rra(a);rra(b);write(1,"rrr\n",4);}
