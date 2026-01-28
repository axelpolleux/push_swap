/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:15:28 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/28 15:41:57 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft/libft.h"
#include "../../includes/push_swap.h"

int	size_list(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

static int	check_list(t_node *stack, int value)
{
	t_node	*index;

	index = stack;
	while (index)
	{
		if (index->value == value)
			return (0);
		index = index->next;
	}
	return (1);
}

static void	add_back(t_node **stack, t_node *node)
{
	t_node	*last;

	if (!*stack)
	{
		*stack = node;
		return ;
	}
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = node;
	node->prev = last;
}

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (0);
	node->value = value;
	node->index = 0;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_node	*make_stack(char **args)
{
	int		i;
	int		value;
	t_node	*stack;
	t_node	*node;

	i = 0;
	stack = NULL;
	while (args[i])
	{
		if (!ft_atol(args[i], &value))
		{
			clear_list(stack);
			return (0);
		}
		ft_atol(args[i], &value);
		node = new_node(ft_atoi(args[i]));
		if (!node || !check_list(stack, value))
		{
			if (node)
				free(node);
			clear_list(stack);
			return (0);
		}
		add_back(&stack, node);
		i++;
	}
	return (stack);
}
