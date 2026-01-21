/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:05:40 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/21 16:33:51 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_already_sorted(t_node *stack)
{
	(void)stack;
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
			if (stack-> value > cursor->value)
				stack->index++;
			cursor = cursor->next;
		}
		stack = stack->next;
	}
}
