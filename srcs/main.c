/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/27 18:34:39 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/push_swap.h"

void	print_list(t_node *stack)
{
	while (stack)
	{
		ft_printf("Value: %d\nIndex: %d\n\n",
			stack->value, stack->index);
		stack = stack->next;
	}
}

int	error(void)
{
	ft_printf("Error\n");
	return (0);
}

void	algorithm(t_node **stack_a, t_node **stack_b)
{
	main_sort(stack_a, stack_b);
	ft_printf("--Stack A--\n");
	print_list(*stack_a);
	ft_printf("--Stack B--\n");
	print_list(*stack_b);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		size_args;
	char	**args;

	if (argc == 1)
		return (0);
	args = parser(argc, argv, &size_args);
	if (!args)
		return (error());
	if (size_args < 2)
		return (0);
	stack_a = make_stack(args);
	free_parser(args);
	stack_b = NULL;
	if (!stack_a)
		return (error());
	stack_index(stack_a);
	if (is_already_sorted(stack_a))
		return (0);
	algorithm(&stack_a, &stack_b);
	clear_list(stack_a);
	clear_list(stack_b);
}
