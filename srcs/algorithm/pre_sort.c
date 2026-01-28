/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:21:18 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/28 09:41:06 by apolleux         ###   ########.fr       */
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

void	algorithm(t_node **stack_a, t_node **stack_b)
{
	if (size_list(*stack_a) == 2)
		sort_two(stack_a);
	else if (size_list(*stack_a) == 3)
		sort_three(stack_a);
	else
		stack_sort(stack_a, stack_b);
}
