/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 11:04:47 by chankach          #+#    #+#             */
/*   Updated: 2025/07/29 21:22:54 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_end_line(t_list *head)
{
	while (head)
	{
		if (head->content == '\n')
			return (0);
		head = head->next;
	}
	return (1);
}

void	ft_freelist(t_list **head)
{
	t_list	*temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

char	*initialize_end(t_list **head)
{
	char	*end;
	t_list	*temp;
	int		i;

	if (!*head)
		return (NULL);
	end = malloc(list_len(*head) + 1);
	if (!end)
		return (ft_freelist(head), NULL);
	i = 0;
	while (*head)
	{
		end[i++] = (*head)->content;
		temp = *head;
		*head = (*head)->next;
		free(temp);
		if (end[i - 1] == '\n')
			break ;
	}
	end[i] = '\0';
	return (end);
}

int	list_len(t_list *head)
{
	int	i;

	i = 0;
	while (head && head->content != '\n')
	{
		head = head->next;
		i++;
	}
	if (head && head->content == '\n')
		i++;
	return (i);
}

void	initialize_list(t_list **head, char c)
{
	t_list	*node;
	t_list	*temp;

	node = malloc(sizeof(t_list));
	if (!node)
		return ;
	node->content = c;
	node->next = NULL;
	if (!*head)
	{
		*head = node;
		return ;
	}
	temp = (*head);
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;
}
