/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoribal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:52:24 by thoribal          #+#    #+#             */
/*   Updated: 2023/10/20 13:11:20 by thoribal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_next_end(int fd, char *str)
{
	char	*buffer;
	int		b;

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	b = 1;
	while (b != 0 && !ft_strchr(str, '\n'))
	{
		b = read(fd, buffer, BUFFER_SIZE);
		if (b < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[b] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*get_line(char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (!s[i])
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	str = ft_substr(s, 0, i + 1);
	if (!str)
		return (NULL);
	return (str);
}

char	*save_next(char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
	{
		free(s);
		return (NULL);
	}
	str = ft_substr(s, i + 1, ft_strlen(s) - i - 1);
	if (!str)
		return (NULL);
	free(s);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*s[10000];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s[fd] = get_next_end(fd, s[fd]);
	if (!s[fd])
		return (NULL);
	line = get_line(s[fd]);
	s[fd] = save_next(s[fd]);
	return (line);
}

/*
int	main(void)
{
	int	fd[4];
	char	*line;
//
	fd[3] = open("test.txt", O_RDONLY);
	line = get_next_line(fd[3]);
	printf("%s", line);
	free(line);
	line = get_next_line(1006);
	printf("%s", line);
	free(line);
	//line = get_next_line(1007);
	//printf("%s", line);
	//free(line);
	//line = get_next_line(fd[3]);
	//printf("%s", line);
	//free(line);
}*/
