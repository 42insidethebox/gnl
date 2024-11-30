/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourname <youremail@student.42.fr>          +#+  +:+       +#+		  */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:25:07 by yourname          #+#    #+#             */
/*   Updated: 2024/11/07 07:25:07 by yourname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*fd_reader(int fd, char *reminder);
char	*get_next_line(int fd);
char	*ft_reminder(char *reminder);
#endif
