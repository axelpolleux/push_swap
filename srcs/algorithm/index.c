/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:05:40 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/20 16:41:07 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf/ft_printf.h"
// #include "../../includes/libft/libft.h"
#include "../../includes/push_swap.h"

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
