/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:15:18 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/27 12:09:26 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	get_cheapest(t_node **stack)
{

}

static void	reduce_a(t_node **stack_a, t_node **stack_b)
{
	int	median;

	median = size_list(*stack_a)/2;
	while (size_list(*stack_a) > 3)
		if ((*stack_a)->index <= median)
		{
			pb(stack_a, stack_b);
			if ((*stack_b)->index < median)
				rb(stack_b);
		}
		else
			ra(stack_a);
}

void	stack_sort(t_node **stack_a, t_node **stack_b)
{
	reduce_a(stack_a, stack_b);
	sort_three(stack_a);
}
