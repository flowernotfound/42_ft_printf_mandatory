/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 02:45:09 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/10/24 02:52:26 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa(unsigned int number)
{
	char	*result;
	int		digits;

	digits = unsigned_digits(number);
	result = (char *)malloc(sizeof(char) * (digits + 1));
	if (result == NULL)
		return (NULL);
	result[digits] = '\0';
	if (number == 0)
		result[0] = '0';
	else
	{

	}
	return (result);
}
