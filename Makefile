# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 05:09:10 by hmitsuyo          #+#    #+#              #
#    Updated: 2023/10/25 06:10:06 by hmitsuyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_itoa.c \
       ft_print_char.c \
       ft_print_hex.c \
       ft_print_int.c \
       ft_print_ptr.c \
       ft_print_str.c \
       ft_print_unsigned.c \
       ft_printf.c \
       ft_utils.c \
       ft_utoa.c
OBJ = $(SRCS:.c=.o)

