/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srananun <srananun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:58:58 by srananun          #+#    #+#             */
/*   Updated: 2026/09/18 16:36:06 by srananun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_formats(va_list arg, const char format);
int		ft_printf(const char *str, ...);
int		ft_print_str(char *str);
int		ft_print_char(int c);
int		ft_print_nbr(int n);
int		ft_print_percent(void);
int		ft_hex_len(unsigned int num);
int		ft_print_hex(unsigned int num, const char format);
int		ft_ptr_len(uintptr_t num);
int		ft_print_ptr(uintptr_t ptr);
int		ft_unsigned_len(unsigned int n);
int		ft_print_unsigned(unsigned int n);

void	ft_put_ptr(uintptr_t num);
void	ft_put_str(char *str);
void	ft_put_hex(unsigned int num, const char format);
void	ft_put_unsigned(unsigned int n);

#endif