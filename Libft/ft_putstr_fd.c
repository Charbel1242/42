/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charbel_hankache <charbel_hankache@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:28:13 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/08 14:43:01 by charbel_han      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// int main()
// {
// 	int ex = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC | 0644);
// 	if (ex < 0)
// 		return (0);
// 	ft_putstr_fd("Hello 42!", ex);
// 	close (ex);
// 	return (0);
// }
