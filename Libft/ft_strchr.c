/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:28:07 by chankach          #+#    #+#             */
/*   Updated: 2025/06/05 19:28:17 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	i = 0;
	while (i <= len)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	printf("%s", ft_strchr("Hello World!", 'q'));
// }	