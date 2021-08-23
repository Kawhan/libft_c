/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurind <klaurind@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 02:24:50 by klaurind          #+#    #+#             */
/*   Updated: 2021/08/22 02:29:54 by klaurind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len2;

	if (*little == '\0')
		return ((char *)big);
	len2 = ft_strlen(little);
	while (*big != '\0' && len-- >= len2)
	{
		if (*big == *little && ft_strncmp(big, little, len2) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
