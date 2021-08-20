/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurind <klaurind@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:20:41 by klaurind          #+#    #+#             */
/*   Updated: 2021/08/19 22:20:42 by klaurind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;
	int	cont2;

	cont = 0;
	cont2 = 0;
	while (str[cont])
	{
		cont++;
		cont2++;
	}
	return (cont2);
}
