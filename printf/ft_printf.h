/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charbel_hankache <charbel_hankache@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 07:27:46 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/17 07:32:45 by charbel_han      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *format, ...);
int	ft_print(char indicator, va_list args);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_base(unsigned long n, const char *base);
int	ft_putptr(void *ptr);

#endif