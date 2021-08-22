/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurind <klaurind@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:50:04 by klaurind          #+#    #+#             */
/*   Updated: 2021/08/21 22:10:09 by klaurind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	res = 0;
	i = 0;
	if (size > len_dst)
	{
		res = len_src + len_dst;
		while (src[i] && (len_dst + 1) < size)
		{
			dst[len_dst] = src[i];
			len_dst++;
			i++;
		}
		dst[len_dst] = '\0';
		return (res);
	}
	else
		res = len_src + size;
	return (res);
}
