/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:17:50 by gcot              #+#    #+#             */
/*   Updated: 2023/03/04 14:17:54 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_join(char *file, char *src);
char	*ft_delete_line(char *str, char *file);
int		ft_strlen(char *str);
int		ft_strchr(char *s, int c);

#endif
