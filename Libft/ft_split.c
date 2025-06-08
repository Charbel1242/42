/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:50:20 by chankach          #+#    #+#             */
/*   Updated: 2025/06/05 19:44:25 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<stdlib.h>

static int	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] != c && j == 0)
		{
			j = 1;
			i++;
		}
		if (s[k] == c)
			j = 0;
		k++;
	}
	return (i);
}

static char	*ft_dup(const char *s, size_t len)
{
	size_t	i;
	char	*word;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **arr, size_t k)
{
	while (k > 0)
	{
		free (arr[k - 1]);
		k--;
	}
	free (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i, j, k;
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > j)
		{
			arr[k] = ft_dup(s + j, i - j);
			if (!arr[k])
			{
				ft_free(arr, k);
				return (NULL);
			}
			k++;
		}
	}
	arr[k] = NULL;
	return (arr);
}
// int main()
// {
// 	size_t i = 0;
// 	char **arr = ft_split("Hello and welcome to 42", ' ');
// 	while (arr && arr[i])
// 	{
// 		printf("arr[%zu]: %s\n", i, arr[i]);
//         free(arr[i]);
//         i++;
//     }
//     free(arr);
//     return (0);
// }
