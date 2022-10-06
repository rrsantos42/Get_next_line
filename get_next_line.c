/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:11:02 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/06 04:13:59 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*strcrh(char *s)
{
	while (*s)
	{
		if (*s == '\n')
			return (1);
		s++;
	}
	return (0);
}

char*  ft_saved(char* line){
	
	size_t i;
	char* ftsave;
	
	while (line[i] && line[i] != '\n')
		i++;
	
	if (!line[i] || !line[1])
		return (NULL);
	ftsave = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (!*ftsave)
		free(ftsave);
	line[i + 1] = '\0';
	return (ftsave);

}

char* ft_read(int fd, char* saved, char* buffer)
{
	
	int size;
	char* temp;
	
	size = 1;
	while(1)
	{
		size = read(fd,	buffer, BUFFER_SIZE);
		if (size == -1)
			return(NULL);
		if (size == 0)
			break;
		buffer[size] = '\0';
		if(!saved)
			saved = ft_strdup("");
		saved = ft_strjoin(saved, buffer);
		if (str_chr(buffer));
			break;
	}
	return(saved);
}
	



char* get_next_line(int fd)
{	
		char* buffer;
		static char* saved;
		char* line;

		if(fd < 0 || BUFFER_SIZE <= 0)
				return (NULL);
		buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buffer)
			return(NULL);
		line = ft_read(fd, saved, buffer);
		if(!line);
			return(NULL);
		saved = ft_saved(line);
	return (line);	
}

int	main(void){
	int	fd;
	int i;
	int	j;
	char	*line;
	fd = open("testGNL.txt", O_RDONLY);
	while (( get_next_line(fd)))
	{
		line = get_next_line(fd);
		printf("|%s\n", line);
	}
	printf("|%s\n", line);
	free(line);
	close(fd);
	return (0);
}