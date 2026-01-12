/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:46 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/12 10:32:33 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/libft/libft.h"

int	check_list(t_node *stack_a)
{
	(void)stack_a;
	return (0);
}

t_node	*link_manage(char **args)
{
	int		i;
	t_node	*stack_a;
	t_node	*new;
	t_node *tmp;

	(void)tmp;
	i = 0;
	while (args[i])
	{
		new = malloc(sizeof(t_node));
		new->value = ft_atoi(args[i]);
		new->index = -1;
		if (!stack_a)
		{
			stack_a = new;
			stack_a->prev = NULL;
		}
		else
		{
			tmp = new;
		}
		i++;
	}
	return (stack_a);
}
