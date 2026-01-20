/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/20 16:47:02 by apolleux         ###   ########.fr       */
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
	t_node	*stack_b;
	int	i = 0;

	(void)stack_a;
	(void)stack_b;
	stack_index(stack_a);
	while (stack_a)
	{
		ft_printf("Node %d\nValue: %d\nIndex: %d\n\n", ++i, stack_a->value, stack_a->index);
		stack_a = stack_a->next;
	}
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**args;

	(void)stack_b;
	args = parser(argc, argv);
	if (!args)
		return (error());
	stack_a = make_stack(args);
	if (!stack_a)
		return (error());
	algorithm(stack_a);
}
