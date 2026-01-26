/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:05:40 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/26 14:56:32 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_index(t_node **stack, int index_to_find)
{
	int		i;
	t_node	*base;

	i = 0;
	base = *stack;
	while (base)
	{
		if (base->index == index_to_find)
			return (i);
		i++;
		base = base->next;
	}
	return (-1);
}

int	is_already_sorted(t_node *stack)
{
	while (stack->next)
	{
		if ((stack->index) > (stack->next->index))
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	stack_index(t_node *stack)
{
	t_node	*cursor;
	t_node	*base;

	base = stack;
	while (stack)
	{
		cursor = base;
		while (cursor)
		{
			if (stack->value > cursor->value)
				stack->index++;
			cursor = cursor->next;
		}
		stack = stack->next;
	}
}
