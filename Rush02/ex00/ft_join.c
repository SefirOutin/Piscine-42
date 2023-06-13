/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:26:00 by octoross          #+#    #+#             */
/*   Updated: 2023/02/26 17:07:03 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

int	ft_sumlens(char **split)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (split[i])
	{
		len += ft_strlen(split[i]);
		i++;
	}
	return (len);
}

int	ft_add_word(char *join, int index_char, int size, char *word)
{
	int	j;

	j = 0;
	while (word[j])
	{
		join[index_char] = word[j];
		index_char++;
		j++;
	}
	if (index_char < size - 1)
	{
		join[index_char] = ' ';
		index_char++;
	}
	return (index_char);
}

char	*ft_join_space(char **split)
{
	char	*join;
	int		size;
	int		index_char;
	int		i;

	size = ft_strtablen(split) + ft_sumlens(split);
	if (!(*split))
		return (NULL);
	join = (char *)malloc(sizeof(char) * size);
	if (!join)
		return (NULL);
	join[size - 1] = '\0';
	i = 0;
	index_char = 0;
	while (split[i])
	{
		index_char = ft_add_word(join, index_char, size, split[i]);
		i++;
	}
	return (join);
}
