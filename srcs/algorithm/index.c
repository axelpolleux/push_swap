/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:05:40 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/20 10:05:35 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf/ft_printf.h"
// #include "../../includes/libft/libft.h"
#include "../../includes/push_swap.h"

void	stack_index(t_node *stack)
{
	// // int		i;
	// int		index;
	t_node	*tmp;

	(void)stack;
	(void)tmp;
	tmp = stack;
	while (stack)
	{
		if (!stack->prev)
			tmp = stack;
		ft_printf("%d", stack->value);
		stack = stack->next;
	}
}
