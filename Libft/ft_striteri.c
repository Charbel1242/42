/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 23:46:23 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/05 19:30:38 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_toupper(unsigned int i, char *c)
// {
// 	(void) i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }
// int main()
// {
// 	char s[] = "hello 42!";
// 	ft_striteri(s, ft_toupper);
// 	printf("%s\n", s);
// }