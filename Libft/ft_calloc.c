/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:27:04 by chankach          #+#    #+#             */
/*   Updated: 2025/06/05 19:45:16 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			i;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	i = 0;
	arr = (unsigned char *)malloc (nmemb * size);
	if (!arr)
		return (NULL);
	while (i < (size * nmemb))
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
// int main()
// {
//     char *arr;
//     arr = (char *)ft_calloc ( 5, sizeof(int));
//     if (!arr)
//         return (1);
// }