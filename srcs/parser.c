/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:49:43 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/06 11:03:51 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/libft/libft.h"
#include "../includes/push_swap.h"

int	parser(int argc, char	**argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (argv[i][0] == '4')
			return 0;
		i++;
	}
	return (1);
}
