/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numb_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:54:53 by apolleux          #+#    #+#             */
/*   Updated: 2025/11/05 19:07:05 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, char *base, int *len)
{
	int		len_base;
	long	n;

	len_base = ft_strlen(base);
	n = (long)nbr;
	if (n < 0)
	{
		ft_putchar('-', len);
		n = -n;
	}
	if (n >= len_base)
		ft_putnbr((n / len_base), base, len);
	ft_putchar((base[n % len_base]), len);
}

void	ft_putnbr_u(int nbr, char *base, int *len)
{
	unsigned int	n;
	unsigned int	len_base;

	n = (unsigned int)nbr;
	len_base = ft_strlen(base);
	if (n >= len_base)
		ft_putnbr_u((n / len_base), base, len);
	ft_putchar((base [n % len_base]), len);
}

void	ft_putnbr_l(long nbr, char *base, int *len)
{
	unsigned int	len_base;
	size_t			n;

	len_base = ft_strlen(base);
	n = (size_t)nbr;
	if (n >= len_base)
		ft_putnbr_l(n / len_base, base, len);
	ft_putchar(base[n % len_base], len);
}

void	ft_putptr(size_t ptr, int *len)
{
	if (!ptr)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	ft_putstr("0x", len);
	ft_putnbr_l(ptr, "0123456789abcdef", len);
}
