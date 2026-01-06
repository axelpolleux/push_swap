/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/06 11:11:38 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/libft/libft.h"
#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	char	*test;

	test = "Hello, World !";
	(void)argc;
	(void)argv;

	ft_printf("%s", test);
	ft_strlen(test);
	// int	i;

	// i = 0;
	// if (parser(argc, argv) == 0)
	// {
	// 	ft_printf("Error\n");
	// 	return (0);
	// }
}
