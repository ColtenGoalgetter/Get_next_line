/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:57:47 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/03/26 13:25:16 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	char	*text;
	int	i;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	text = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	i = read(fd, text, BUFFER_SIZE);
	text[BUFFER_SIZE + 1] = '\0';
	
	return (text);
}

int	main()
{
	int	n;
	char	*line;

	n = open("/Users/jrebelo-/Desktop/42/get_next_line/testes/test.txt", O_RDONLY);
	line = get_next_line(n);
	if (line != NULL)
		printf("%s\n", line);
	return(0);
}
