/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurind <klaurind@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:28:27 by klaurind          #+#    #+#             */
/*   Updated: 2021/09/06 15:03:27 by klaurind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nword(const char *s, char c)
{
	int			word_started;
	int			w_count;
	const char	*s1;

	s1 = s;
	w_count = 0;
	word_started = 0;
	while (*s1)
	{
		if (*s1 != c && !word_started)
		{
			w_count++;
			word_started = 1;
		}
		else if (*s1 == c && word_started == 1)
			word_started = 0;
		s1++;
	}
	return (w_count);
}

static int	get_wordlen(char const *s, char const c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*get_word(char const *s, int len)
{
	char	*s1;
	int		ind;

	s1 = malloc(len + 1);
	ind = 0;
	if (!s1)
		return (NULL);
	while (len > 0)
	{
		s1[ind] = s[ind];
		ind++;
		len--;
	}
	s1[ind] = '\0';
	return (s1);
}

static void	*clean(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		m_ind;
	int		w_len;
	int		n_word;

	if (s == NULL)
		return (NULL);
	m_ind = 0;
	n_word = get_nword(s, c);
	array = malloc(sizeof(char *) * (n_word + 1));
	if (array == NULL)
		return (NULL);
	while (m_ind < n_word)
	{
		w_len = get_wordlen(s, c);
		if (w_len)
		{
			array[m_ind] = get_word(s, w_len);
			if (*(array + m_ind++) == NULL)
				return (clean(array));
		}
		s += w_len + 1;
	}
	array[m_ind] = NULL;
	return (array);
}
