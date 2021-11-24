/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memorryadress.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:45:34 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/24 15:45:36 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_memorryadress(unsigned long long num)
{
	int	i;

	ft_putstr("0x");
	i = ft_adress(num);
	return (hexcount(num) + 2);
}
