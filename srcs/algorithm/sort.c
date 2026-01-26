/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:15:18 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/26 09:55:34 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/push_swap.h"

void	stack_sort(t_node **stack_a, t_node **stack_b)
{
	int	i;

	i = 0;
	while (*stack_a) {
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
	while (*stack_b) {
		pa(stack_a,  stack_b);
	}
}
