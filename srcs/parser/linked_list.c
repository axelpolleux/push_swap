/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:46 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/12 19:29:59 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/libft/libft.h"

static int	check_list(t_node *stack)
{
	t_node	*index;

	while (stack)
	{
		index = stack;
		while (index)
		{
			ft_printf("%d\n", index->value);
			index = index->next;
		}
		stack = stack->next;
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

static t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (0);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_node	*make_stack(char **args)
{
	int		i;
	t_node	*stack;
	t_node	*node;

	i = 0;
	stack = NULL;
	while (args[i])
	{
		node = new_node(ft_atoi(args[i]));
		if (!node)
			return (0);
		add_back(&stack, node);
		i++;
	}
	if (check_list(stack) == 0)
		return (0);
	return (stack);
}
