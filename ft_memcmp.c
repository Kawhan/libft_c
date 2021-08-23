/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurind <klaurind@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:18:21 by klaurind          #+#    #+#             */
/*   Updated: 2021/08/22 17:26:48 by klaurind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	const unsigned char		*str1;
	const unsigned char		*str2;

	if (b1 == b2 || len == 0)
		return (0);
	str1 = (const unsigned char *)b1;
	str2 = (const unsigned char *)b2;
	while (len--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (len)
		{
			str1++;
			str2++;
		}
	}
	return (0);
}
