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

void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_puthex(unsigned int n)
{
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_puthex(n / 16);
	c = hex[n % 16];
	write(1, &c, 1);
}
