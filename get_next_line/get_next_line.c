/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 11:02:51 by chankach          #+#    #+#             */
/*   Updated: 2025/07/29 21:22:52 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

char	*get_next_line(int fd)
{
	char			*buffer;
	static t_list	*head;
	int				i;
	int				j;

	while (ft_end_line(head))
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return (ft_freelist(&head), NULL);
		j = read(fd, buffer, BUFFER_SIZE);
		if (j <= 0)
		{
			free(buffer);
			if (!head)
				return (NULL);
			return (initialize_end(&head));
		}
		buffer[j] = '\0';
		i = 0;
		while (i < j)
			initialize_list(&head, buffer[i++]);
		free(buffer);
	}
	return (initialize_end(&head));
}

// int	main()
// {
// 	int	fd = open("text.txt", O_RDONLY);
// 	char	*line = get_next_line(fd);

// 	while (line)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	close(fd);
// }