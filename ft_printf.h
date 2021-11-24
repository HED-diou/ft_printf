/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:45:59 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/24 15:46:01 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* ====      INCLUDES     ==== */

# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

/* ====  functions ==== */

int				hexcount(unsigned long long num);
int				ft_len(long nb);
int				ft_putchar(char c);
int				ft_putstr(const char *c);
int				ft_putnbr(long long nb, int fd);
int				ft_hex(unsigned int num);
int				ft_hexx(unsigned int num);
int				ft_adress(unsigned long long num);
int				ft_memorryadress(unsigned long long num);
unsigned int	uconvert(long long num);
int				ft_printf(const char *string, ...);

#endif
