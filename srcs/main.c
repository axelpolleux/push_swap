/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/21 17:11:26 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/push_swap.h"

void	print_list(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		ft_printf("Node %d\nValue: %d\nIndex: %d\n\n",
			++i, stack->value, stack->index);
		stack = stack->next;
	}
}

int	error(void)
{
	ft_printf("Error\n");
	return (0);
}

void	algorithm(t_node *stack_a)
{
	t_node	*stack_b;

	(void)stack_a;
	(void)stack_b;
	print_list(stack_a);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		size_args;
	char	**args;

	(void)stack_b;
	if (argc == 1)
		return (0);
	args = parser(argc, argv, &size_args);
	if (!args)
		return (error());
	if (size_args < 2)
		return (0);
	stack_a = make_stack(args);
	if (!stack_a)
		return (error());
	stack_index(stack_a);
	if (is_already_sorted(stack_a))
		return (0);
	algorithm(stack_a);
}
