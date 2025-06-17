/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 21:14:06 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/14 19:14:15 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putstr(char *s)
{
	int		i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int		c;
	long	nb;

	c = 0;
	nb = n;
	if (nb < 0)
	{
		c += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		c += ft_putnbr(nb / 10);
	c += write(1, &"0123456789"[nb % 10], 1);
	return (c);
}

int	ft_putnbr_base(unsigned long n, const char *base)
{
	int	len_base;
	int	count;

	len_base = 0;
	count = 0;
	while (base[len_base])
		len_base++;
	if (n >= (unsigned long) len_base)
		count += ft_putnbr_base(n / len_base, base);
	count += write(1, &base[n % len_base], 1);
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long	value;
	int				count;
	char			hex[16];
	int				i;
	char			*digits;

	value = (unsigned long) ptr;
	count = 0;
	i = 0;
	digits = "0123456789abcdef";
	if (!ptr)
		return (write(1, "(nil)", 5));
	coiunt += write(1, "0x", 2);
	while (value)
	{
		hex[i++] = digits[value % 16];
		value /= 16;
	}
	while (i--)
		count += write(1, &hex[i], 1);
	return (count);
}
