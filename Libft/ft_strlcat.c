/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 18:08:58 by chankach          #+#    #+#             */
/*   Updated: 2025/06/05 19:33:05 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	lendest;
	unsigned int	i;
	unsigned int	lensrc;

	lendest = 0;
	i = 0;
	lensrc = 0;
	while (dest[lendest] != '\0')
		lendest++;
	while (src[lensrc] != '\0')
		lensrc++;
	if (lendest >= size)
		return (lensrc + size);
	while (src[i] != '\0' && lendest + i < size - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
// int main()
// {
//     char src[] = "Hello World!";
// 	char dest[] = "42";
// 	printf("%d", ft_strlcat(dest, src, 88));
// }