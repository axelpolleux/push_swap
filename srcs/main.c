/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/12 10:32:16 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/libft/libft.h"
#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;

	stack_a = malloc(sizeof(t_node));
	stack_a->index = -1;
	stack_a->prev = NULL;
	stack_a->value = 42;
	stack_a->next = NULL;
	if (parser(argc, argv, stack_a) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
}
