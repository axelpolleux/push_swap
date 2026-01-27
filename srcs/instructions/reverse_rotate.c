/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:07:16 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/27 11:52:43 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/push_swap.h"
#include <unistd.h>

static void	reverse_rotate(t_node **stack)
{
	t_node	*begin;
	t_node	*last;

	begin = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	last->prev->next = NULL;
	last->prev = NULL;
	*stack = last;
	last->next = begin;
	begin->prev = last;
}

void	rra(t_node **stack_a)
{
	if (size_list(*stack_a) >= 2)
	{
		reverse_rotate(stack_a);
		ft_printf("rra\n");
		set_position(*stack_a);
	}
}

void	rrb(t_node **stack_b)
{
	if (size_list(*stack_b) >= 2)
	{
		reverse_rotate(stack_b);
		ft_printf("rrb\n");
		set_position(*stack_b);
	}
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if ((size_list(*stack_a) >= 2) && (size_list(*stack_b) >= 2))
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		ft_printf("rrr\n");
		set_position(*stack_a);
		set_position(*stack_b);
	}
}
