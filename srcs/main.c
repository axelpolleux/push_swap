/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/13 15:02:15 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/push_swap.h"

int	error(void)
{
	ft_printf("Error\n");
	return (0);
}

void	algorithm(t_node *stack_a)
{
	(void)stack_a;
	t_node	stack_b;

	(void)stack_b;
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**args;

	(void)stack_a;
	(void)stack_b;
	args = parser(argc, argv);
	if (!args)
		return (error());
	stack_a = make_stack(args);
	if (!stack_a)
		return (error());
}
