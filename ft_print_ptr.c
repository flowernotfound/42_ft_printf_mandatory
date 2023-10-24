/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:43:27 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/10/24 23:48:47 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(unsigned long long p)
{
	int		length;
	int		total_length;
	char	*str_p;

	str_p = p_to_hex(p);
	if (str_p == NULL)
		return (0);
	length = ft_strlen(str_p);
	total_length = length + 2;
	write(1, "0x", 2);
	write(1, str_p, length);
	free(str_p);
	return (total_length);
}
