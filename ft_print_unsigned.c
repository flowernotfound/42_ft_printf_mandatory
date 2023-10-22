/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 03:46:07 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/10/23 03:48:25 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int number)
{
	int		length;
	char	*s;

	s = ft_utoa(s);
	if (s ==NULL)
		return (0);
	length = ft_strlen(s);
	write(1, s, length);
	free(s);
	return (length);
}
