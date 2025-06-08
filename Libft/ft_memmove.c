/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:12:19 by chankach          #+#    #+#             */
/*   Updated: 2025/06/05 19:44:38 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned char	*temp;
	size_t			i;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	temp = (unsigned char *)malloc(n * sizeof(unsigned char));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < n)
	{
		temp[i] = ptr1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr2[i] = temp[i];
		i++;
	}
	free (temp);
	return (dest);
}
// int main()
// {
//     char src[] = "Hello World!";
//     char dest[20];
//     int n = 3;
//     ft_memmove(dest,src,n);
//     dest[n] = '\0';
//     printf("%s",dest);
// }