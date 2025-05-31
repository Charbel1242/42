/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:53:33 by chankach          #+#    #+#             */
/*   Updated: 2025/05/27 18:57:24 by chankach         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  	size_t i;
    const unsigned char *ptr1;
    const unsigned char *ptr2;

    ptr1 = (unsigned char*)s1;
    ptr2 = (unsigned char*)s2;
    i = 0;

	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
    return (0);
}
int main()
{
    char *s1 = "Hello orld!";
    char *s2 = "Hello World!";
    int n = 10;
    printf("%d", ft_memcmp(s1, s2, n));
}  
