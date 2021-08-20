/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurind <klaurind@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 07:53:25 by klaurind          #+#    #+#             */
/*   Updated: 2021/08/19 20:10:26 by klaurind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char		*src_cpy;
	unsigned char			*dest_cpy;
	size_t					i;

	src_cpy = (unsigned char *)src;
	dest_cpy = (unsigned char *)dst;
	i = 0;
	if (!src_cpy && !dest_cpy)
		return (NULL);
	if (dest_cpy > src_cpy)
	{
		while (len-- > 0)
		{
			dest_cpy[len] = src_cpy[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest_cpy[i] = src_cpy[i];
			i++;
		}
	}
	return (dest_cpy);
}
