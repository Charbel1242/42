/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 12:53:51 by chankach          #+#    #+#             */
/*   Updated: 2025/05/24 13:24:09 by chankach         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

void ft_bzero(void *str, size_t n)
{
    unsigned char *ptr;
    size_t i;

    ptr = (unsigned char*)str;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}
int main()
{
    int i;
    
    i = 0;
    char str[10] = "abcdefghij";
    ft_bzero(str,7);
    while(i<10)
    {
        printf("%d", str[i]);
        i++;
    }
}