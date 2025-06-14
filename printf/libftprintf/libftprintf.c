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

char	ft_indicator(const char *indicator)
{
	int	i;

	i = 0;
	while (indicator[i] != '%')
		i++;
	if (indicator[i + 1] == 'c')
		return (indicator[i + 1]);
	if (indicator[i + 1] == 's')
		return (indicator[i + 1]);
	if (indicator[i + 1] == 'p')
		return (indicator[i + 1]);
	if (indicator[i + 1] == 'd')
		return (indicator[i + 1]);
	if (indicator[i + 1] == 'i')
		return (indicator[i + 1]);
	if (indicator[i + 1] == 'u')
		return (indicator[i + 1]);
	if (indicator[i + 1] == 'x')
		return (indicator[i + 1]);
	if (indicator[i + 1] == 'X')
		return (indicator[i + 1]);
	if (indicator[i + 1] == '%')
		return (indicator[i + 1]);
	return (0);
}

void	print(const char *arg, char indicator, char c)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if ((arg[i] == '%' && arg[i + 1] == '%'))
		{
			write(1, "%", 1);
			i += 2;
			continue ;
		}
		if ((arg[i] == '%' && arg[i + 1] == indicator))
		{
			write (1, &c, 1);
			i += 2;
			continue ;
		}
		write (1, &arg[i], 1);
		i++;
	}
}

int	ft_printf(const char *indicator, ...)
{
	va_list	arg;
	char	*to_print_s;
	char	to_print;
	char	i;

	va_start(arg, indicator);
	i = ft_indicator(indicator);
	if (i == 'c' || i == '%')
	{
		to_print = (char)va_arg(arg, int);
		print(indicator, i, to_print);
	}
	if (i == 's')
	{
		to_print_s = va_arg(arg, char *);
		ft_putstr(to_print_s);
	}
	if 
	{
	
		
	}
	va_end(arg);
	return (0);
}

int	main()
{
	ft_printf("char test : %c\n", 'v');
	printf("char test : %c\n", 'v');
	ft_printf("char test : %%c\n");
	printf("char test : %%c\n");
}
