/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:02:36 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/10/25 04:10:52 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef

# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int n);
int	print_char(int c);
int	print_hex(unsigned int number, int flag);
int	print_int(int number);
int	print_ptr(unsigned long long p);
int	print_str(char *s);
int	print_unsigned(unsigned int number);
char	*ft_utoa(unsigned int number);
int	ft_strlen(char *s);

#endif
