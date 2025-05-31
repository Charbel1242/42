/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 11:28:55 by chankach          #+#    #+#             */
/*   Updated: 2025/05/24 11:39:16 by chankach         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int ft_strlen(char *str)
{
    int	i;
	
	i = 0;
    while (str[i] != '\0')
    {
		i++;  
    }
	return (i);
}
int main()
{
	printf("%d", ft_strlen("Hello World!"));
}