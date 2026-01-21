/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/21 15:29:19 by apolleux         ###   ########.fr       */
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
	stack_index(stack_a);
	print_list(stack_a);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**args;

	(void)stack_b;
	if (argc < 3)
		return (0);
	args = parser(argc, argv);
	if (!args)
		return (error());
	stack_a = make_stack(args);
	if (!stack_a)
		return (error());
	algorithm(stack_a);
}
