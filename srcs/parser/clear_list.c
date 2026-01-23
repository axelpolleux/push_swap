/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:34:59 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/23 15:38:20 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	clear_list(t_node **stack)
{
	t_node	*tmp;

	while (*stack){
		if ((*stack)->next)
			tmp = (*stack)->next;

	}
}
