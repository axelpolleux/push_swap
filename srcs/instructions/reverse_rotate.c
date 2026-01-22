/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:07:16 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/22 15:36:16 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/push_swap.h"



static void	reverse_rotate(t_node **stack)
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

void	rra(t_node **stack_a)
{
	if (size_list(*stack_a) >= 2)
	{
		reverse_rotate(stack_a);
		ft_printf("rra\n");
	}
}

void	rrb(t_node **stack_b)
{
	if (size_list(*stack_b) >= 2)
	{
		reverse_rotate(stack_b);
		ft_printf("rrb\n");
	}
}


void	rrr(t_node **stack_a, t_node **stack_b)
{
	if ((size_list(*stack_a) >= 2) && (size_list(*stack_b) >= 2))
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		ft_printf("rrr\n");
	}
}
