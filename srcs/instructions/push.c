/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:50 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/27 11:52:28 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/push_swap.h"
#include <unistd.h>

static void	push(t_node **from, t_node **dest)
{
	t_node	*tmp;

	tmp = *from;
	if (!tmp)
		return ;
	if (tmp->next)
	{
		tmp->next->prev = NULL;
		*from = tmp->next;
	}
	else
		*from = NULL;
	tmp->next = *dest;
	tmp->prev = NULL;
	if (*dest)
		(*dest)->prev = tmp;
	*dest = tmp;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	if (*stack_b)
	{
		push(stack_b, stack_a);
		ft_printf("pa\n");
		set_position(*stack_a);
		set_position(*stack_b);
	}
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if (*stack_a)
	{
		push(stack_a, stack_b);
		ft_printf("pb\n");
		set_position(*stack_a);
		set_position(*stack_b);
	}
}
