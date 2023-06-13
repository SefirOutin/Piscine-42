/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_library.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:21:53 by soutin            #+#    #+#             */
/*   Updated: 2023/05/26 15:57:59 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBRARY_H

# define FT_LIBRARY_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_dict
{
	int		key;
	char	*value;
}	t_dict;

# define BUFF_SIZE 4096

int				ft_possible_write(unsigned int n, t_dict *dicts);
void			ft_write_int(unsigned int n, t_dict *dicts);
char			*ft_join_space(char **split);
char			**ft_split(char *str, char *sep);
long int		ft_atoi_arg(char *str);
int				ft_atoi_dict(char *str);
char			*ft_value_of_key(unsigned int key, t_dict *dicts);
unsigned int	ft_max(unsigned int n, t_dict *dicts);
void			ft_set_dict(t_dict *dicts, int i, int key, char *value);
void			ft_free_dicts(t_dict *dicts);
void			ft_free_tab(char **split, int to_free_until);
int				ft_is_printable(char *s);
int				ft_char_is_printable(char s);
int				ft_strlen(char *s);
int				ft_strtablen(char **s);
int				ft_char_is_sep(char c, char *sep);
void			print_dict(t_dict *dicts);
void			print_split(char **split);
t_dict			*ft_parser(char *dict_name, int *win);

#endif