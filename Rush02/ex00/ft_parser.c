/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:18:47 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 18:49:16 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

int	ft_check_format(char *entry)
{
	int	i;

	i = 0;
	while (entry[i] == ' ')
		i++;
	if (entry[i] == '+')
		i++;
	if ('0' > entry[i] || entry[i] > '9')
		return (0);
	i++;
	while ('0' <= entry[i] && entry[i] <= '9')
		i++;
	while (entry[i] == ' ')
		i++;
	if (entry[i] != ':')
		return (0);
	i++;
	while (entry[i] == ' ')
		i++;
	if (!ft_char_is_printable(entry[i]))
		return (0);
	while (entry[i] && ft_char_is_printable(entry[i]))
		i++;
	return (entry[i] == '\0');
}

int	ft_check_entry(char **entry, char *value)
{
	if (ft_strtablen(entry) < 2)
		return (0);
	if (ft_atoi_dict(entry[0]) == -1)
		return (0);
	if (!ft_is_printable(value))
		return (0);
	return (1);
}

void	ft_invalid_value(t_dict *dicts, int i, int *flag)
{
	ft_set_dict(dicts, i, -1, "");
	ft_free_dicts(dicts);
	*flag = 0;
}

int	ft_check_and_dict(char **entries, t_dict *dicts, int *flag)
{
	int		i;
	char	**entry;
	char	*value;

	i = 0;
	while (entries[i] && *flag)
	{
		if (!ft_check_format(entries[i]))
			*flag = 0;
		entry = ft_split(entries[i], ": ");
		if (!entry)
			*flag = 0;
		value = ft_join_space(&entry[1]);
		if (!value)
			ft_invalid_value(dicts, i, flag);
		if (!ft_check_entry(entry, value))
			*flag = 0;
		ft_set_dict(dicts, i, ft_atoi_dict(entry[0]), value);
		ft_free_tab(entry, ft_strtablen(entry));
		i++;
	}
	ft_set_dict(dicts, i, -1, "");
	ft_free_tab(entries, ft_strtablen(entries));
	return (1);
}

t_dict	*ft_parser(char *dict_name, int *win)
{
	int		fd;
	int		nb_bytes;
	char	buffer[BUFF_SIZE + 1];
	char	**entries;
	t_dict	*dicts;

	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	nb_bytes = read(fd, buffer, BUFF_SIZE);
	if (close(fd) == -1)
		return (NULL);
	buffer[nb_bytes] = '\0';
	entries = ft_split(buffer, "\n");
	dicts = (t_dict *)malloc(sizeof(t_dict) * (ft_strtablen(entries) + 1));
	if (!dicts)
	{
		*win = 0;
		return (NULL);
	}
	*win = ft_check_and_dict(entries, dicts, win);
	return (dicts);
}
