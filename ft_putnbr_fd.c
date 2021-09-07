/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurind <klaurind@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:02:06 by klaurind          #+#    #+#             */
/*   Updated: 2021/09/06 17:02:11 by klaurind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int n)
{
	if (n >= 0)
		return (0);
	return (1);
}

static int	n_len(int n)
{
	int	len;

	len = 0;
	if (is_negative(n))
	{
		while (n <= (-1))
		{
			len++;
			n = n / 10;
		}
	}
	else
	{
		while (n >= 1)
		{
			len++;
			n = n / 10;
		}
	}
	if (len == 0)
		return (len + 1);
	return (len);
}

static int	pow(int base, int exp)
{
	int	output;

	output = 1;
	while (exp)
	{
		if ((exp & 1) != 0)
			output *= base;
		exp = exp >> 1;
		base *= base;
	}
	return (output);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	curr_char;
	int		negative;
	int		len;
	int		n_unit;

	len = n_len(n);
	negative = is_negative(n);
	if (negative)
		ft_putchar_fd('-', fd);
	while (len)
	{
		n_unit = pow(10, len - 1);
		if (!negative)
			curr_char = (n / n_unit) + '0';
		else
			curr_char = ((n / n_unit) * (-1)) + '0';
		ft_putchar_fd(curr_char, fd);
		n -= n_unit * (n / n_unit);
		len--;
	}
}
