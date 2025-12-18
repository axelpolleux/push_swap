/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:51:54 by apolleux          #+#    #+#             */
/*   Updated: 2025/12/18 11:59:21 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/libft/libft.h"

static int	parser(int number_of_args, char	**args)
{
	int	i;
	int	arg_int;

	i = 1;
	while (i < number_of_args)
	{
		arg_int = ft_atoi(args[i]);
		if (arg_int == 0 && arg_int != '0')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	parser_result;

	parser_result = parser(argc, argv);
	if (!parser_result)
	{
		ft_printf("Error\n");
		return (0);
	}
	return (0);
}
