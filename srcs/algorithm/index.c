/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:05:40 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/20 11:36:19 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf/ft_printf.h"
// #include "../../includes/libft/libft.h"
#include "../../includes/push_swap.h"

static int	is_indexed(t_node *stack)
{
	t_node	*stack_base;

	stack_base = stack;
	while (stack_base)
	{
		if (stack_base->index < 0)
			return (0);
		stack_base = stack_base->next;
	}
	return (1);
}

static void	index(t_node *stack)
{
	while (stack)
	{
	}
}

void	stack_index(t_node *stack)
{
	int		i;
	t_node	*stack_base;
	t_node	*tmp;

	(void)stack_base;
	(void)tmp;
	i = 0;
	while (!is_indexed(stack))
	{
		index(stack);
	}

	// print all the nodes with their index
	i = 0;while (stack){ft_printf("Node %d\nValue: %d\nIndex: %d\n\n", ++i, stack->value, stack->index);stack = stack->next;}
}
