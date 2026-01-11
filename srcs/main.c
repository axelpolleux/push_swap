/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/10 10:15:20 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/libft/libft.h"
#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	stack_a;
	t_node	stack_b;

	stack_a.next = NULL;
	stack_a.index = 2;
	stack_a.value = 45;
	(void)stack_b;
	if (parser(argc, argv, stack_a) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
}
