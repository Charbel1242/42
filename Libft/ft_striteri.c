/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charbel_hankache <charbel_hankache@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 23:46:23 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/05 07:18:44 by charbel_han      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;
	char *mapi;

	if (!s || !f)
		return;
	i = 0;
	while (s[i] != '\0')
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return;
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
	char *s = ft_striteri("hello 42!", ft_toupper);
	printf("%s\n",s);
}