/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 11:42:15 by chankach          #+#    #+#             */
/*   Updated: 2025/05/24 13:04:53 by chankach         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<stdio.h>

void *ft_memset(void *str, int c,size_t n)
{
    unsigned char *ptr;
    size_t i;
    
    ptr = (unsigned char *)str; 
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return(str);
}
int main()
{
    char str[10];
    ft_memset(str,'0',7);
    str[7] = '\0';
    printf("%s",str);
}