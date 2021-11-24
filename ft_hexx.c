/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:45:12 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/24 15:45:13 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexx(unsigned int num)
{
	if (num > 15)
		ft_hexx(num / 16);
	if (num % 16 > 9)
		ft_putchar(num % 16 + 55);
	else if (num % 16 <= 9)
		ft_putchar(num % 16 + 48);
	return (hexcount(num));
}
