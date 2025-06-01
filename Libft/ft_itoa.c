/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charbel_hankache <charbel_hankache@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:26:19 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/01 20:39:32 by charbel_han      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

static int ft_numlen(int n)
{
    int	len;
	
	if (n <= 0)
		len = 1;
	else
		len = 0;
    while (n != 0)
    {
		len++;
		n /= 10; 
    }
	return (len);
}
char *ft_itoa(int n)
{
	int len;
	long nb;
	char *str;

	len = ft_numlen(n);
	nb = n;
	str = (char *)malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		str[len - 1] = '0' + (nb % 10);
		len--;
		nb /= 10;
	}
	return (str);
}
int main()
{
	char *i;
	i = ft_itoa(128);
	printf("%s\n", i);
	free(i);
}