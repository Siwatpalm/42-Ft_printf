/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srananun <srananun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:53:42 by srananun          #+#    #+#             */
/*   Updated: 2026/09/18 16:11:51 by srananun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_unsigned_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_put_unsigned(unsigned int n)
{
	if (n >= 10)
	{
		ft_put_unsigned(n / 10);
		ft_put_unsigned(n % 10);
	}
	else
	{
		ft_putchar_fd((n + '0'), 1);
	}
}

int	ft_print_unsigned(unsigned int n)
{
	ft_put_unsigned(n);
	return (ft_unsigned_len(n));
}
