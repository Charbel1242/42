/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:59:07 by chankach          #+#    #+#             */
/*   Updated: 2025/05/27 20:04:01 by chankach         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
	int	i;
	int sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if(nptr[i] == '+' || nptr[i] == '-')
	{
		if(nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		number *= 10;
		number += nptr[i] - 48;
		i++;
	}
	return(number * sign);
}
int main()
{
    printf("%d\n", ft_atoi(" \n +1234ab567\n"));
	printf("%d\n", atoi(" \n +1234ab567\n"));
}