/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:40:46 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/08 17:17:55 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include "../../includes/libft/libft.h"
#include "../../includes/ft_printf/ft_printf.h"

void	link_manage(char **args, t_node stack_a)
{
	int	i;

	(void)stack_a;
	i = 0;
	while (args[i])
	{
		ft_printf("%d\n", ft_atoi(args[i]));
		i++;
	}
}
