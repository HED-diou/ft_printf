/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:46:29 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/24 15:46:31 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long nb, int fd)
{
	char	c;
	int		i;

	i = 0;
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		i += ft_putnbr(-nb, fd);
	}
	else
	{
		if (nb > 9)
			i += ft_putnbr(nb / 10, fd);
		c = ((nb % 10) + '0');
		ft_putchar(c);
	}
	i = ft_len(nb);
	return (i);
}
