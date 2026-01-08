/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:46 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/08 18:04:13 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include "../../includes/libft/libft.h"
#include "../../includes/ft_printf/ft_printf.h"

void	link_manage(char **args, t_node stack_a)
{
	int	i;

	(void)stack_a;
	i = 0;
	while (args[i])
	{
		t_node *new_node;
		new_node = ft_lstnew(ft_atoi(args[i])); // newnode == {value: ft_atoi(args[i]), next: NULL};
		new_node->value = ;
		ft_printf("%d\n", );
		ft_lstadd_back(stack_a, );
		i++;
	}
}
