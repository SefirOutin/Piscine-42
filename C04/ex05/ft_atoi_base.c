/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:37:07 by soutin            #+#    #+#             */
/*   Updated: 2023/02/27 16:02:27 by soutin           ###   ########.fr       */
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

int	check_base(char *base)
{
	int	i;
	int	c;
	int	size;

	i = 0;
	size = ft_strlen(base);
	while (i < size)
	{
		c = i + 1;
		if (base[i] == 45 || base[i] == 43)
			return (1);
		if ((base[i] > 8 && base[i] <= 13) || base[i] == 32)
			return (1);
		while (c <= size)
		{
			if (base[i] == base[c])
				return (1);
			c++;
		}
		i++;
	}
	return (0);
}

int	iofb(char s, char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (*base == s)
			return (i);
		base++;
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	nbr;
	int	baselen;

	sign = 1;
	nbr = 0;
	baselen = ft_strlen(base);
	if (baselen < 2 && check_base(base))
		return (0);
	while ((*str > 8 && *str <= 13) || *str == 32)
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*str == 43)
			sign *= -1;
		str++;
	}
	while (*str && iofb(*str, base) != -1)
	{
		nbr = nbr * baselen + iofb(*str, base);
		str++;
	}
	return (nbr * sign);
}

#include<stdio.h>
int	main(int c, char **v)
{
	if (c == 3)
		printf("%d", ft_atoi_base(v[1], v[2]));
	return 0;
}
