/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:41:00 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/23 09:51:23 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/push_swap.h"

static void	swap(t_node **stack)
{
	t_node	*node1;
	t_node	*node2;

	node1 = *stack;
	node2 = node1->next;
	node2->prev = NULL;
	node1->prev = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->next = node1;
	*stack = node2;
}

void	sa(t_node **stack_a)
{
	if (*stack_a && size_list(*stack_a) > 1)
	{
		swap(stack_a);
		ft_printf("sa\n");
	}
}

void	sb(t_node **stack_b)
{
	if (*stack_b && size_list(*stack_b) > 1)
	{
		swap(stack_b);
		ft_printf("sb\n");
	}
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a && size_list(*stack_a) > 1)
		&& (*stack_b && size_list(*stack_b) > 1))
	{
		swap(stack_a);
		swap(stack_b);
		ft_printf("ss\n");
	}
}
