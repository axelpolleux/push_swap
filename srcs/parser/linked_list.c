/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:46 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/11 18:06:47 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/libft/libft.h"



t_node	*link_manage(char **args)
{
	int	i;
	t_node	*stack;
	t_node	*tmp;
	t_node	*new;

	stack = NULL;
	i = 0;
	while (args[i])
	{
		new->value = ft_atoi(args[i]);

		if (!stack)
			stack = new;
		else
			tmp = new;
		i++;
	}
	return (stack);
}
