/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charbel_hankache <charbel_hankache@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:55:09 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/08 14:42:55 by charbel_han      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
// int main()
// {
// 	int ex = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (ex < 0)
// 		return (0);
// 	ft_putendl_fd("Hello 42!", ex);
// 	close (ex);
// 	return (0);
// }
