/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 11:04:47 by chankach          #+#    #+#             */
/*   Updated: 2025/06/21 11:04:49 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int len_to_newline(t_list *list)
{
    int i;
    int len;

    if (!list)
        return (0);
    len = 0;
    while (list)
    {
        i = 0;
        while (list->str_buf[i] != 0)
        {
            if (list->str_buf[i] == '\n')
            {
                len++;
                return (len);
            }
            i++;
            len++;
        }
        list = list -> next;
    }
    return (len);
}
void    copy_str(t_list *list, char *str)
{
    int	i;
	int	k;

	if (!list)
		return (NULL);
	k = 0;
	while (list)
	{
		i = 0;
		while (list->str_buf[i])
		{
			if (list->str_buf[i] == '\n')
			{
				str[k++] = '\n';
				str[k] = '\0';
				return;
			}
			str[k++] = list->str_buf[i++];
		}
		list = list->next;
	}
	str[k] = '\0';
}
int	found_newline(t_list *list)
{
	int	i;

	if (!list)
		return (0);
	while(list)
	{
		i = 0;
		while (list->str_buff[i] && i < BUFFER_SIZE)
		{
			if (list->str_buf[i] == '\n')
				return (1);
			i++;
		}
		list = list->next;
	}
	return (0);
}

t_list	*find_last_node(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

void	ft_free(t_list **list, t_list *clean_node, char *buf)
{
	t_list	*tmp

	if(!list)
		return (NULL);
	while (*list)
	{
		tmp = (*list)->next;
		free((*list)->str_buf);
		free(*list);
		*list = tmp;
	}
	*list = NULL;
	if (clean_node->str_buf[0])
		*list = clean_node;
	else
	{
		free(buf);
		free(clean_node);
	}
}
