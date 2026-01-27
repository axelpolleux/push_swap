/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:53 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/27 11:52:14 by apolleux         ###   ########.fr       */
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
	while (last->next)
		last = last->next;
	tmp->prev = last;
	tmp->next->prev = NULL;
	*stack = tmp->next;
	tmp->next = NULL;
	last->next = tmp;
}

void	ra(t_node **stack_a)
{
	if (*stack_a && size_list(*stack_a) >= 2)
	{
		rotate(stack_a);
		ft_printf("ra\n");
		set_position(*stack_a);
	}
}

void	rb(t_node **stack_b)
{
	if (*stack_b && size_list(*stack_b) >= 2)
	{
		rotate(stack_b);
		ft_printf("rb\n");
		set_position(*stack_b);
	}
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a && *stack_b)
		&& (size_list(*stack_a) >= 2)
		&& (size_list(*stack_b) >= 2))
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_printf("rr\n");
		set_position(*stack_a);
		set_position(*stack_b);
	}
}
