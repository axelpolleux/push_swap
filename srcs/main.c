/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/28 18:05:12 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/push_swap.h"

int	error(void)
{
	ft_printf("Error\n");
	return (0);
}

static char	**build_args(int argc, char **argv)
{
	int		size_args;
	char	**result;

	if (argc == 1)
		return (0);
	result = parser(argc, argv, &size_args);
	if (!result)
	{
		free_parser(result);
		return (0);
	}
	if (size_args < 2)
		return (0);
	return (result);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**args;

	args = build_args(argc, argv);
	if (!args)
		return (error());
	stack_a = make_stack(args);
	free_parser(args);
	stack_b = NULL;
	if (!stack_a)
		return (error());
	stack_index(stack_a);
	if (is_already_sorted(stack_a))
	{
		clear_list(stack_a);
		return (0);
	}
	algorithm(&stack_a, &stack_b);
	clear_list(stack_a);
	clear_list(stack_b);
}
