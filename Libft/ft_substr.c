/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:45:28 by chankach          #+#    #+#             */
/*   Updated: 2025/05/28 20:57:18 by chankach         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;
    size_t lens;
    
    i = 0;
    lens = 0;
    while(s[lens] != '\0')
        lens++;
    if (start >= lens)
        len = 0;
    if (len > lens - start)
        len = lens - start;
    str = (char *)malloc ((len + 1) * sizeof(char));
    if (!str)
        return(NULL);
    while (i < len && s[start + i] != '\0')
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return(str);
}
int main()
{
    printf("%s", ft_substr("Hello 42!", 0 , 4));
}