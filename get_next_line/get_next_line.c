/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 11:02:51 by chankach          #+#    #+#             */
/*   Updated: 2025/07/23 21:08:01 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

char	*get_next_line(int fd)
{
	char			*buffer;
	static t_list	*head;
	int				i;
	int				r;

	while (!endline(head))
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return (free_list(&head), NULL);
		r = read(fd, buffer, BUFFER_SIZE);
		if (r <= 0)
		{
			free(buffer);
			if (!head)
				return (NULL);
			return (init_end(&head));
		}
		buffer[r] = '\0';
		i = -1;
		while (++i < r)
			init_list(&head, buffer[i]);
		free(buffer);
	}
	return (init_end(&head));
}
