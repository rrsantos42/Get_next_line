/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:11:02 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/05 02:19:22 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*strcrh(const char *s)
{
	while (*s)
	{
		if (*s == '\n')
			return ((char *)s);
		s++;
	}
	return (0);
}

char*  ft_saved(char* line){


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
		temp = saved;
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
		saved = 
	
}

int	main(void){
	int	fd;

	fd = open ("testGNL.txt", O_RDONLY);
	if (fd == -1)
		printf("error");
	close (fd);
	return (0);
}