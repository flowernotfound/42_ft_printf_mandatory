/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 03:15:43 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/10/24 04:47:45 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*hex_to_str(unsigned int number, int flag)
{
	char	*result;
	int		digits;

	digits = unsigned_digits(number);
	result = (char *)malloc(sizeof(char) * (digits + 1));
	if (result == NULL)
		return (NULL);


	return (result);
}

int	print_hex(unsigned int number, int flag)
{
	int		length;
	char	*s;

	length = 0;
	s = hex_to_str(number, flag);
	if (s == NULL)
		return (0);
	length = ft_strlen(s);
	write(1, s, length);
	free(s);
	return (length);
}
