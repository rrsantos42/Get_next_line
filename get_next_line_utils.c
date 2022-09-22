/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 04:57:23 by rsantos           #+#    #+#             */
/*   Updated: 2022/09/22 05:14:38 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t i;
	char *str;
	
	i = 0;
	if (len < ft_strlen((char *)s))
		str = malloc((len + 1) * sizeof(char));
	if(len > ft_strlen((char *)s))
		str = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!str)
		return(NULL);
	
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return(str);
}

size_t	ft_strlen(char *str)
{
	size_t i;
	
	i = -1;
	while(str[++i]);
	return(i);
}

char    *ft_strdup(const char *str)
{
    int  i;
    int  len;
    char *dup;

    len = 0;
    i = -1;
    while(str[len])
        len++;
    dup = malloc((len + 1) *sizeof (char));
    if(!dup)
        return(NULL);
    while(str[++i])
        dup[i] = str[i];
    dup[i] = '\0';
    return (dup);
}

char	*ft_strjoin(const char *str1, const char *str2)
{
	int i;
	int j;
	int size1;
	int size2;
	char *newstr;
	
	i = -1;
	j = -1;
	size1 = ft_strlen(str1);
	size2 = ft_strlen(str2);
	if(!str1 || !str2)
		return(NULL);
	newstr = malloc((size1 + size2 + 1) * sizeof(char));
	if(!newstr)
		return(NULL);
	while (str1[++i])
		newstr[i] = str1[i];
	while (str2[++j])
		newstr[i + j] = str2[j];
	newstr[i + j] = '\0';
	return(newstr);
}