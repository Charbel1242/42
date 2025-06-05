/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chankach <chankach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:57:15 by chankach          #+#    #+#             */
/*   Updated: 2025/06/05 19:42:00 by chankach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_isinset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (ft_isinset(s1[i], set))
		i++;
	while (j > i && ft_isinset(s1[j - 1], set))
		j--;
	trim = (char *)malloc((j - i + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	k = 0;
	while (i < j)
		trim[k++] = s1[i++];
	trim[k] = '\0';
	return (trim);
}
// int main()
// {
// 	char *trim = ft_strtrim("", "Hello 42! He");
// 	printf("%s", trim);
// 	free(trim);
// }
