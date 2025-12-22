/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:27:46 by apolleux          #+#    #+#             */
/*   Updated: 2025/11/05 15:05:53 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	decode_format(int c, va_list args, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), "0123456789", len);
	else if (c == 'x')
		ft_putnbr_u(va_arg(args, int), "0123456789abcdef", len);
	else if (c == 'X')
		ft_putnbr_u(va_arg(args, int), "0123456789ABCDEF", len);
	else if (c == 'u')
		ft_putnbr_u(va_arg(args, int), "0123456789", len);
	else if (c == 'p')
		ft_putptr((size_t)va_arg(args, void *), len);
	else if (c == '%')
		ft_putchar('%', len);
	else
		ft_putchar(c, len);
}

int	ft_printf(const char *format, ...)
{
	char	*res;
	va_list	arguments;
	int		len;

	len = 0;
	if (!format)
		return (-1);
	va_start(arguments, format);
	res = (char *)format;
	while (*res)
	{
		if (*res == '%')
			decode_format(*++res, arguments, &len);
		else
			ft_putchar(*res, &len);
		res++;
	}
	va_end(arguments);
	return (len);
}
