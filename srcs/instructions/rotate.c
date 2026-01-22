/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:53 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/22 13:47:15 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/push_swap.h"

static void	rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*last;

	tmp = *stack;
	last = *stack;
	if (size_list(*stack) < 2)
		return ;
	while (last->next)
		last = last->next;

	tmp->prev = last;
	last->next = tmp;
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	ft_printf("ra\n");
}


void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
