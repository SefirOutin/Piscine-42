/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:56:21 by soutin            #+#    #+#             */
/*   Updated: 2023/03/02 15:54:33 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_char_is_sep(char a, char *sep)
{
	while (*sep)
	{
		if (*sep == a)
			return (1);
		sep++;
	}
	return (0);
}

int	count_arrays(char *str, char *sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (str[i])
	{
		if (!ft_char_is_sep(str[i], sep))
		{
			i++;
			count++;
		}
		while (str[i + 1])
		{
			if (ft_char_is_sep(str[i], sep) && !ft_char_is_sep(str[i + 1], sep))
				count++;
			i++;
		}
	}
	return (count);
}

char	*insert_char(char *str, int i, char *sep)
{
	char	*cpy;
	int		j;

	j = i;
	while (str[j] && !ft_char_is_sep(str[j], sep))
		j++;
	cpy = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!cpy)
		return (NULL);
	j = 0;
	while (str[i] && !ft_char_is_sep(str[i], sep))
	{
		cpy[j] = str[i];
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;
	int		i_char;

	i = 0;
	i_char = 0;
	strs = (char **)malloc(sizeof(char *) * (count_arrays(str, charset) + 1));
	if (!strs)
		return (NULL);
	while (i < count_arrays(str, charset))
	{
		while (str[i_char] && ft_char_is_sep(str[i_char], charset))
			i_char++;
		strs[i] = insert_char(str, i_char, charset);
		while (str[i_char] && !ft_char_is_sep(str[i_char], charset))
			i_char++;
		i++;
	}
	strs[i] = 0;
	return (strs);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**f;
	f = ft_split("..je suis.un d.ballon...", ". ");
//	printf("%s\n", insert_char"je suis un ballon", 3, " "));
	printf("%d\n", count_arrays("", ""));
	int	i = 0;
	while (f[i])
	{
		printf("%s\n", f[i]);
		free(f[i]);
		i++;
	}
	free(f);
	return 0;
}*/
