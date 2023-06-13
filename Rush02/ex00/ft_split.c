/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:39:55 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 18:41:58 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

int	ft_nbr_words(char *str, char *sep)
{
	int	nbr_words;
	int	i;

	if (str[0])
	{
		i = 1;
		nbr_words = 0;
		while (str[i])
		{
			if (ft_char_is_sep(str[i], sep))
			{
				if (!ft_char_is_sep(str[i - 1], sep))
					nbr_words++;
			}
			i++;
		}
		return (nbr_words + !ft_char_is_sep(str[i - 1], sep));
	}
	return (0);
}

char	*ft_word(char *str, int *i, char *sep)
{
	int		j;
	char	*word;

	j = *i;
	while (str[j] && !ft_char_is_sep(str[j], sep))
		j++;
	word = (char *)malloc(sizeof(char) * (j + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (str[*i] && !ft_char_is_sep(str[*i], sep))
	{
		word[j] = str[*i];
		(*i)++;
		j++;
	}
	word[j] = '\0';
	while (str[*i] && ft_char_is_sep(str[*i], sep))
		(*i)++;
	return (word);
}

char	**ft_split(char *str, char *sep)
{
	int		nbr_words;
	int		i;
	int		index_char;
	char	**split;

	nbr_words = ft_nbr_words(str, sep);
	split = (char **)malloc(sizeof(char *) * (nbr_words + 1));
	if (!split)
		return (NULL);
	index_char = 0;
	while (ft_char_is_sep(str[index_char], sep))
		index_char++;
	i = 0;
	while (i < nbr_words)
	{
		split[i] = ft_word(str, &index_char, sep);
		if (!split[i])
		{
			ft_free_tab(split, i);
			return (NULL);
		}
		i++;
	}
	split[i] = 0;
	return (split);
}
