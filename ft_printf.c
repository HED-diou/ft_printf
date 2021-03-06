/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:45:48 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/24 15:45:49 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	switchette(va_list arg_ptr, const char *string, int i, int cmp)
{
	while (string[i] != '\0')
	{
		if (string[i] != '%')
			cmp += ft_putchar(string[i]);
		else if (string[++i] == 'c')
			cmp += ft_putchar(va_arg(arg_ptr, int));
		else if (string[i] == 's')
			cmp += ft_putstr(va_arg(arg_ptr, char *));
		else if (string[i] == 'd' || string[i] == 'i')
			cmp += ft_putnbr(va_arg(arg_ptr, int), 1);
		else if (string[i] == 'x')
			cmp += ft_hex(va_arg(arg_ptr, unsigned int ));
		else if (string[i] == 'X')
			cmp += ft_hexx(va_arg(arg_ptr, unsigned int ));
		else if (string[i] == 'p')
			cmp += ft_memorryadress(va_arg(arg_ptr, unsigned long long));
		else if (string[i] == '%')
			cmp += ft_putchar('%');
		else if (string[i] == 'u')
			cmp += uconvert(va_arg(arg_ptr, unsigned int));
		i++;
	}
	return (cmp);
}

int	ft_printf(const char *string, ...)
{
	va_list	arg_ptr;
	int		i;
	int		cmp;

	va_start(arg_ptr, string);
	i = 0;
	cmp = 0;
	cmp = switchette(arg_ptr, string, i, cmp);
	va_end(arg_ptr);
	return (cmp);
}
