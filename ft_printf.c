/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:10:03 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/10/23 01:20:07 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_arg(va_list ap, const char format)
{
	int	count;

	count = 0;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int		result;
	int		i;

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			result += print_arg(ap, format[i + 1]);
			i++;
		}
		else
			result += putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (result);
}
