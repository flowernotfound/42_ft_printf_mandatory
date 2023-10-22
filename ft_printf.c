/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:10:03 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/10/23 01:40:59 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_arg(va_list ap, const char c)
{
	int	count;

	if (c == 'c')
		count += print_char(va_arg(ap, char));
	else if (c == 's')
		count += print_str(va_arg(ap, char *));
	else if (c == 'p')
		count += print_ptr(va_arg(ap, unsigned long long));
	else if (c == 'd' || c == 'i')
		count += print_int(va_arg(ap, int));
	else if (c == 'u')
		count += print_unsigned(va_arg(ap, unsigned int));
	else if (c == 'x')
		count += print_hex(va_arg(ap, unsigned int), 0);
	else if (c == 'X')
		count += print_hex(va_arg(ap, unsigned int), 1);
	else if (c == '%')
		count += ft_putchar('%');
	count = 0;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int		result;
	int		i;

	result = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			result += print_arg(ap, format[i + 1]);
			i++;
		}
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (result);
}
