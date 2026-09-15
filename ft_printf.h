/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srananun <srananun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:58:58 by srananun          #+#    #+#             */
/*   Updated: 2026/09/15 20:27:13 by srananun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printstr(char *str);
int		ft_printchar(int c);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_hex_len(unsigned int num);
int		ft_print_hex(unsigned int num, const char format);
int		ft_ptr_len(uintptr_t num);
int		ft_print_ptr(uintptr_t ptr);

void	ft_put_ptr(uintptr_t num);
void	ft_putstr(char *str);
void	ft_puthex(unsigned int num, const char format);


#endif