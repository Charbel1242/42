/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:43:29 by chankach          #+#    #+#             */
/*   Updated: 2025/06/05 19:44:30 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int	main()
// {
// 	int	ex = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (ex < 0)
// 		return (0) ;
// 	ft_putchar_fd ('C', ex);
// 	close(ex);
// }