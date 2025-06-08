/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:50:16 by chankach          #+#    #+#             */
/*   Updated: 2025/06/05 19:33:12 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char	*dest, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
// int main()
// {
//     char src[] = "Hello World!";
// 	char dest[20];
// 	printf("%d", ft_strlcpy(dest, src, 88));
// }