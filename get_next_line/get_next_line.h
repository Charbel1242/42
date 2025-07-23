/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:29:55 by chankach          #+#    #+#             */
/*   Updated: 2025/07/23 21:08:05 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	char			content;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
int		endline(t_list *head);
void	init_list(t_list **head, char c);
char	*init_end(t_list **head);
int		get_size(t_list *head);
void	free_list(t_list **head);

#endif
