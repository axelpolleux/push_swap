/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:49:43 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/20 14:16:50 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../includes/ft_printf/ft_printf.h"
#include "../../includes/libft/libft.h"
#include "../../includes/push_swap.h"
#include <unistd.h>

int	ft_atol(const char *str, int *out)
{
	long	res = 0;
	int		sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (*str < '0' || *str > '9')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		if (res > (LONG_MAX - (*str - '0')) / 10)
			return (0);
		res = res * 10 + (*str - '0');
		str++;
	}
	res *= sign;
	if (res < INT_MIN || res > INT_MAX)
		return (0);
	*out = (int)res;
	return (1);
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

char	**parser(int argc, char	**argv)
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
	return (args);
}
