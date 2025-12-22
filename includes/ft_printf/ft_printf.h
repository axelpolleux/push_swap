/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:28:02 by apolleux          #+#    #+#             */
/*   Updated: 2025/11/05 15:14:58 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
size_t	ft_strlen(const char *s);
void	ft_putstr(char *s, int *len);
void	ft_putnbr(int n, char *base, int *len);
void	ft_putnbr_u(int nbr, char *base, int *len);
void	ft_putptr(size_t ptr, int *len);

#endif
