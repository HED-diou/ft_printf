/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:45:05 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/24 15:45:07 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int num)
{
	if (num > 15)
		ft_hex(num / 16);
	if (num % 16 > 9)
		ft_putchar(num % 16 + 87);
	else if (num % 16 <= 9)
		ft_putchar(num % 16 + 48);
	return (hexcount(num));
}
