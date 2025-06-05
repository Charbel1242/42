/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:17:06 by chankach          #+#    #+#             */
/*   Updated: 2025/06/05 19:40:20 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (str[len] == c)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}
// int main()
// {
// 	printf("%s", ft_strrchr("Hello World!", 'o'));
// }