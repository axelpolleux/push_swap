/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:46 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/11 19:03:58 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/libft/libft.h"



t_node	*link_manage(char **args)
{
	t_node	*stack = NULL;

	(void)args;
	stack->value = 14;
	stack->index = 0;
	stack->next = NULL;
	stack->prev = NULL;
	return (stack);
}
