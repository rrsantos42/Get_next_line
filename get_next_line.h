/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:21:00 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/06 18:01:24 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_h
#define GET_NEXT_LINE_H


# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>


char *get_next_line(int fd);
char	*ft_substr(char const *s, size_t start, size_t len);
char    *ft_strdup(char *str);
char	*ft_strjoin(char *str1, char *str2);
size_t	ft_strlen(char *str);




#endif
