/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 01:16:00 by knomura           #+#    #+#             */
/*   Updated: 2025/05/28 07:29:42 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// void	*free_stash(char **stash)
// {
// 	if (stash && *stash)
// 	{
// 		free(*stash);
// 		*stash = NULL;
// 	}
// 	return (NULL);
// }


char	*clean_stash(char *stash)
{

}

char	*extract_line(char *stash)
{

	return ();
}

char	*read_and_stash(int fd, char *stash)
{
	char	*buf;
	ssize_t	bytes_read;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	while (!strchr(stash, '\0') && bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buf);
			return (NULL);
		}
	buf[bytes_read] = '\0';
	char	*tmp = stash;
	if (!stash)
		return (NULL);
	}

	return (0);
}

char	*get_next_line(int fd)
{
	static char		*stash;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_and_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = clean_stash(stash);
	return (line);
}
