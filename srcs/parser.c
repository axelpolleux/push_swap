/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:49:43 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/07 18:40:36 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf/ft_printf.h"
#include "../includes/libft/libft.h"
#include "../includes/push_swap.h"

static char	**space_cleaner(int argc, char **args)
{
	int		i;
	char	*str;
	char	**result;

	i = 1;
	str = "";

	while (i < argc)
	{
		if (args[i] == 0)
			return (0);
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, args[i]);
		i++;
	}
	result = ft_split(str, ' ');

	return (result);
}

int	parser(int argc, char	**argv)
{
	char	**args;
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == 0 && argv[i][0] != '0')
			return (0);
		i++;
	}

	if (space_cleaner(argc, argv) == 0)
		return (0);
	args = space_cleaner(argc, argv);
	i = 0;
	while (argv[i])
	{
		if (ft_atoi(args[i]) == 0 && args[i][0] != '0')
			return (0);
		i++;
	}
	return (1);
}
