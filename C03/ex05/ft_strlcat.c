/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:51:54 by soutin            #+#    #+#             */
/*   Updated: 2023/02/20 15:35:19 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_l;
	unsigned int	src_l;

	i = 0;
	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (size <= dest_l)
		src_l += size;
	else
		src_l += dest_l;
	while (src[i] && i < size - dest_l - 1)
	{
		dest[dest_l] = src[i];
		i++;
		dest_l++;
	}
	dest[dest_l] = '\0';
	return (src_l);
}
/*
#include<stdio.h>
int	main()
{
	char	h[17] = "Je suis";
	printf("%d", ft_strlcat(h, "une merde", 17));
}*/
