/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:29:55 by chankach          #+#    #+#             */
/*   Updated: 2025/07/29 21:22:57 by chankach         ###   ########.fr       */
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
int		ft_end_line(t_list *head);
void	ft_freelist(t_list **head);
char	*initialize_end(t_list **head);
int		list_len(t_list *head);
void	initialize_list(t_list **head, char c);

#endif
