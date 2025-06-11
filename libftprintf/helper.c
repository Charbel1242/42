/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charbel_hankache <charbel_hankache@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 21:14:06 by charbel_han       #+#    #+#             */
/*   Updated: 2025/06/11 21:21:04 by charbel_han      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
