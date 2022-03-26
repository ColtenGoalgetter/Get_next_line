/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:27:00 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/03/26 13:35:29 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main()
{
	int	n;
	char	*line;

	n = open("/Users/jrebelo-/Desktop/42/get_next_line/testes", O_RDONLY);
	line = get_next_line(n);
	if (line != NULL)
			printf("%s\n", line);
	return (0);
}

char	*get_next_line(int fd)
{
	char	*text;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	text = malloc(sizeof(char) * (BUFFER_SIZE + 1))
}
