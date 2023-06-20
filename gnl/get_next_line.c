/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:04:28 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/20 14:09:59 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line_and_next_one(int fd, char *static_buffer)
{
	int		bytes_read;
	char	*temp;

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr_gnl(static_buffer, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(temp);
			free(static_buffer);
			return (NULL);
		}
		temp[bytes_read] = '\0';
		static_buffer = ft_strjoin_gnl(static_buffer, temp);
	}
	free(temp);
	if (ft_strlen_gnl(static_buffer) != 0)
		return (static_buffer);
	free(static_buffer);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char		*static_buffer;
	char			*return_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_buffer = get_line_and_next_one(fd, static_buffer);
	if (!static_buffer)
		return (NULL);
	return_line = ft_firstline(static_buffer);
	static_buffer = ft_secondline(static_buffer);
	return (return_line);
}
