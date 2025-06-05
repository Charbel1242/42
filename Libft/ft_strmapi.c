/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charbel_hankache <charbel_hankache@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:07:31 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/04 23:41:31 by charbel_han      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int ft_strlen(char const *str)
{
    int	i;
	
	i = 0;
    while (str[i] != '\0')
    {
		i++;  
    }
	return (i);
}

char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    size_t i;
	char *mapi;

	if (!s || !f)
		return(NULL);
	i = 0;
	mapi = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!mapi)
		return (NULL);
	while (s[i] != '\0')
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}

char ft_toupper(unsigned int i, char c)
{
    (void)i;
	if (c >= 'a' && c <= 'z')
        return(c - 32);
    return(c);
}
int main()
{
	char *s = ft_strmapi("hello 42!", ft_toupper);
	printf("%s\n",s);
	free(s);
}