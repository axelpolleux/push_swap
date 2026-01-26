/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:15:18 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/26 18:18:34 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	reduce_a(t_node **stack_a, t_node **stack_b)
{
	while (size_list(*stack_a) > 3)
		pb(stack_a, stack_b);
}

void	stack_sort(t_node **stack_a, t_node **stack_b)
{
	reduce_a(stack_a, stack_b);
	sort_three(stack_a);
}
