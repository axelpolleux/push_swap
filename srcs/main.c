/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/08 09:32:21 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/libft/libft.h"
#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	if (parser(argc, argv) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
}
