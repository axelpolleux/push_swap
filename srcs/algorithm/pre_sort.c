/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:21:18 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/30 14:17:53 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_two(t_node **stack)
{
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}

void	sort_three(t_node **stack)
{
	if ((*stack)->index > (*stack)->next->index
		&& (*stack)->index > (*stack)->next->next->index)
		ra(stack);
	if ((*stack)->next->index > (*stack)->index
		&& (*stack)->next->index > (*stack)->next->next->index)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	int	pos;

	while (size_list(*stack_a) > 3)
	{
		pos = top_index(stack_a);
		if (pos <= size_list(*stack_a) / 2)
			while (pos--)
				ra(stack_a);
		else
			while (pos++ < size_list(*stack_a))
				rra(stack_a);
		pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	if ((*stack_b)->index < (*stack_b)->next->index)
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	algorithm(t_node **stack_a, t_node **stack_b)
{
	if (size_list(*stack_a) == 2)
		sort_two(stack_a);
	else if (size_list(*stack_a) == 3)
		sort_three(stack_a);
	else if (size_list(*stack_a) == 5)
		sort_five(stack_a, stack_b);
	else
		stack_sort(stack_a, stack_b);
}
