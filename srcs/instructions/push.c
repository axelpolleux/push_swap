/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:50 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/22 14:42:17 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/push_swap.h"

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
	*dest = tmp;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	if (*stack_b)
	{
		ft_printf("pa\n");
		push(stack_b, stack_a);
	}
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if (*stack_a)
	{
		ft_printf("pb\n");
		push(stack_a, stack_b);
	}
}
