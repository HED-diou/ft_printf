/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:44:51 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/24 15:44:54 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adress(unsigned long long num)
{
	if (num > 15)
		ft_adress(num / 16);
	if ((num % 16) > 9)
		ft_putchar(num % 16 + 87);
	else if ((num % 16) <= 9)
		ft_putchar(num % 16 + 48);
	return (hexcount(num));
}
