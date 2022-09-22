/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:11:02 by rsantos           #+#    #+#             */
/*   Updated: 2022/09/22 05:50:14 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char* ft_read(int fd, char* saved, char* buffer){
	
	int flag;
	char* temp;
	
	flag = 1;
	while (flag != 0)
	{
	
		
		
	}
	
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
	
}

int	main(void){

	FILE * fpointer;
	fpointer = fopen("testGNL", "r");
	
}