/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:49:43 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/27 11:19:23 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft/libft.h"
#include "../../includes/push_swap.h"

void	set_position(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->pos = i;
		stack = stack->next;
		i++;
	}
}

static int	check_arg(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		if (!args[i][0])
			return (0);
		j = 0;
		if (args[i][j] == '-' || args[i][j] == '+')
			j++;
		if (!ft_isdigit(args[i][j]))
			return (0);
		while (ft_isdigit(args[i][j]))
			j++;
		if (args[i][j] != '\0')
			return (0);
		i++;
	}
	return (1);
}

static int	is_empty_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (str[i] == '\0');
}

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
	str = NULL;
	free(str);
	return (result);
}

char	**parser(int argc, char	**argv, int *size)
{
	char	**args;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (is_empty_string(argv[i]))
			return (0);
		i++;
	}
	args = space_cleaner(argc, argv);
	if (!args)
		return (0);
	if (!check_arg(args))
		return (0);
	*size = i + 1;
	return (args);
}
