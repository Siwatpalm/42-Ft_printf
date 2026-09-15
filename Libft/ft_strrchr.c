/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srananun <srananun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 14:35:30 by srananun          #+#    #+#             */
/*   Updated: 2026/08/29 15:03:47 by srananun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*start;

	start = s;
	i = ft_strlen(s);
	s = s + i;
	while (s >= start)
	{
		if (*s == ((char)c))
			return ((char *)s);
		s--;
	}
	return (0);
}
