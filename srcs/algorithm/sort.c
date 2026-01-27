/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:15:18 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/27 17:31:58 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	top_index(t_node **stack)
{
	int		i;
	int		max;
	t_node	*base;
	t_node	*tmp;

	i = 0;
	max = 0;
	base = *stack;
	tmp = base;
	while (base)
	{
		if ((base->index) > (tmp->index))
		{
			tmp = base;
			max = i;
		}
		i++;
		base = base->next;
	}
	return (max);
}

static void	finish(t_node **stack_a, t_node **stack_b)
{
	while (*stack_b)
	{
		while (top_index(stack_b) > 0)
		{
			if (top_index(stack_b) < (size_list(*stack_b) / 3))
				rb(stack_b);
			else
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
	}
}

static void	wings(t_node **stack_a, t_node **stack_b)
{
	int	limiter;

	limiter = 8 + 1 * (size_list(*stack_a) / 20);
	while (*stack_a)
	{
		if ((*stack_a)->index < size_list(*stack_b))
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		else if ((*stack_a)->index < limiter + size_list(*stack_b))
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
}

void	stack_sort(t_node **stack_a, t_node **stack_b)
{
	wings(stack_a, stack_b);
	finish(stack_a, stack_b);
}
