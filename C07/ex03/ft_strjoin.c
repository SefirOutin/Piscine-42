/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:33:49 by soutin            #+#    #+#             */
/*   Updated: 2023/03/02 20:52:15 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	di;

	i = 0;
	di = ft_strlen(dest);
	while (src[i])
	{
		dest[di] = src[i];
		i++;
		di++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*fstr;
	int		i;
	int		strslen;

	i = 0;
	strslen = 0;
	while (i < size)
		strslen += ft_strlen(strs[i++]);
	fstr = malloc(sizeof(char) * strslen + (ft_strlen(sep) * (size -1)));
	if (!fstr)
		return (0);
	if (size < 1)
		return ("");
	i = 0;
	while (i < size)
	{
		ft_strcat(fstr, strs[i]);
		if (i < size -1)
			ft_strcat(fstr, sep);
		i++;
	}
	fstr[ft_strlen(fstr)] = '\0';
	return (fstr);
}
/*
#include<stdio.h>
#include<stdlib.h>
int	main()
{
	char *str[] = {"gt", "gt", "gt"};
	char    *f = ft_strjoin(3, str, ", ");
	printf("%s", f);
	return 0;
}*/
