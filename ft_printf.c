/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srananun <srananun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:03:10 by srananun          #+#    #+#             */
/*   Updated: 2026/09/18 17:24:09 by srananun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_formats(va_list arg, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_print_char(va_arg(arg, int));
	else if (format == 's')
		print_len += ft_print_str(va_arg(arg, char *));
	else if (format == 'p')
		print_len += ft_print_ptr(va_arg(arg, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_len += ft_print_nbr(va_arg(arg, int));
	else if (format == 'u')
		print_len += ft_print_unsigned(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += ft_print_hex(va_arg(arg, unsigned int), format);
	else if (format == '%')
		print_len += ft_print_percent();
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;
	int		print_len;

	i = 0;
	print_len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_formats(arg, str[i + 1]);
			i++;
		}
		else
		{
			print_len += ft_print_char(str[i]);
		}
		i++;
	}
	va_end(arg);
	return (print_len);
}
