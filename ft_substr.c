/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurind <klaurind@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 03:42:40 by klaurind          #+#    #+#             */
/*   Updated: 2021/09/06 15:04:35 by klaurind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	sbstr = NULL;
	if (start > s_len)
		len = 1;
	else if (start + len > s_len)
		len = s_len - start + 1;
	else
		len++;
	sbstr = malloc(len * sizeof(char));
	if (sbstr == NULL)
		return (NULL);
	ft_strlcpy(sbstr, s + start, len);
	return (sbstr);
}
