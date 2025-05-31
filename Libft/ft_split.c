/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:50:20 by chankach          #+#    #+#             */
/*   Updated: 2025/05/31 18:13:12 by chankach         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t len;
    char *str;

	i = 0;
    while (s[i] != '\0')
		len++;
    str = (char *)malloc((len + 1) * sizeof(char));
	if(!str)
		return(NULL);
    i = 0;
    while (i < len)
    {
        if (str[i] == "")
            str[i] = c;
        i++;
    }
    return(&str);
}
int main()
{
	char *s = printf("%s", ft_split("Hello and welcome to 42", ','));
	free(s);
}