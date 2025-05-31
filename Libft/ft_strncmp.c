/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:27:38 by chankach          #+#    #+#             */
/*   Updated: 2025/05/25 12:46:41 by chankach         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
int main()
{
    char *s1 = "Hello Orld!";
    char *s2 = "Hello World!";
    int n = 10;
    printf("%d", ft_strncmp(s1, s2, n));
}