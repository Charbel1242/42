#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

typedef struct	s_list
{
	char 			content;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd)
{
	char			*buffer;
	static t_list 	*head;
	int 			i;
	int				j;

	while (ft_end_line(head))
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if(!buffer)
			return(ft_freelist(&head), NULL);
		j = read(fd, buffer, BUFFER_SIZE);
		if (j <= 0)
		{
			free(buffer);
			if (!head)
				return (NULL);
			return (initialize_end(&end));
		}
	}
}

void	ft_end_line(t_list *head)
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
		*head = *head->next;
		free(temp)
	}
}

void	intialize_end(t_list **head)
{
	char	*end;
	t_list	*temp;
	int		i;

	if(!*head)
		return (NULL);
	end = malloc(list_len(*head) + 1);
	if (!end)
		return (ft_freelist(end), NULL);
	i = 0;
	while (*head )
	{
		end[i++] = (*head)->content;
		temp = *head;
		*head = (*head)->next;
		free(temp);
		if (end[i - 1] == '\n')
			break;
	}
	end[i] = '\0';
	return (end);
}

int list_len(t_list *head)
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