/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:42:27 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/14 23:47:34 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_print(char indicator, va_list args)
{
	if (indicator == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (indicator == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (indicator == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (indicator == 'd' || indicator == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (indicator == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	if (indicator == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	if (indicator == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	if (indicator == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		output;

	i = 0;
	output = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			output += ft_print(format[i + 1], args);
			i += 2;
			continue ;
		}
		output += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (output);
}

int	main()
{
	ft_printf("char test : %c\n", 'v');
	printf("char test : %c\n", 'v');
	ft_printf("char test : %%c\n");
	printf("char test : %%c\n");
}

