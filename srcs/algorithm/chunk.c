/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:15:15 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/26 10:26:00 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	clear_chunk(t_chunk *chunk)
{
	(void)chunk;
}

t_chunk	*new_chunk(int min, int max)
{
	t_chunk	*res;

	(void)min;
	(void)max;
	res = malloc(sizeof(t_chunk));

	return (res);
}
