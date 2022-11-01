/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:05:29 by rsantos           #+#    #+#             */
/*   Updated: 2022/11/01 17:13:14 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strcrh(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == '\n')
			return (1);
	return (0);
}

char	*ft_saved(char	*line)
{
	size_t	i;
	char	*ftsave;

	i = 0;
	if (!line)
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
		return (NULL);
	ftsave = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (!ftsave)
		free(ftsave);
	line[i + 1] = '\0';
	return (ftsave);
}

char	*ft_read(int fd, char *saved, char *buffer)
{
	int		size;
	char	*temp;

	size = 1;
	while (1)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size == -1)
			return (NULL);
		if (size == 0)
			break ;
		buffer[size] = '\0';
		if (!saved)
			saved = ft_strdup("");
		temp = ft_strjoin(saved, buffer);
		free(saved);
		saved = temp;
		if (ft_strcrh(buffer))
			break ;
	}
	return (saved);
}

char	*get_next_line(int fd)
{	
	char		*buffer;
	static char	*saved[FOPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FOPEN_MAX)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	line = ft_read(fd, saved[fd], buffer);
	free (buffer);
	if (!line || !line[0])
		return (NULL);
	saved[fd] = ft_saved(line);
	return (line);
}
