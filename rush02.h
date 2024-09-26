/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:33:47 by jvarila           #+#    #+#             */
/*   Updated: 2024/09/22 14:12:29 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define FT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# define BUFFER_SIZE 1024
# define LINE_SIZE 1024
# define MAX_LINES 42

char	*ft_skip_over_whitespace(char *str);
char	*ft_skip_over_word(char *str);
char	*ft_skip_to_char(char *str, char c);
int		ft_char_index(char *str, char c);
int		ft_word_count(char *str);
int		ft_word_length(char *str);
int		ft_strlen(char *str);
int		ft_str_is_a_number(char *str);
int		ft_char_in_string(char *str, char c);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlcpy(char *dest, char *src, int size);
char	*ft_copy_of_one_line(char *buffer);
char	*ft_copy_of_next_word(char *buffer);
//------------------------------------------------------------------------------
// Functions inside read_file.c
int		find_colon(char *line);
int		get_line(char *ln, int ln_i, char **keys, char **values, int ln_c);
int		read_file(int fd, char **keys, char **values);
void	ft_strcpy_start_end(char *dest, char *src, int start, int end);

typedef struct s_dict_entry
{
	char			*key;
	unsigned int	key_length;
	char			*value;
	unsigned int	value_length;
}				t_dict_entry;

typedef struct s_dict
{
	t_dict_entry	*entries;
	unsigned long		dict_size;
}				t_dict;

#endif
