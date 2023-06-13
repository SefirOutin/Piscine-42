/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:06:55 by soutin            #+#    #+#             */
/*   Updated: 2023/03/02 20:53:02 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_strlen(char *a);
char	*ft_swap(char *str);
int		good(char a, char *base);
int		check_char_base(char *nbr, char *base);
int		ft_nbd(long int nb, int baselen);

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	i = 0;
	if (len < 2)
		return (0);
	while (i < len - 1)
	{
		j = i + 1;
		if (base[i] == 45 || base[i] == 43)
			return (0);
		if (base[i] <= 32)
			return (0);
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	iofbf(char nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_putnbr_base(long int nbr, char *base_to)
{
	int				i;
	char			*cnb;
	int				baselen;

	i = 0;
	baselen = ft_strlen(base_to);
	cnb = (char *)malloc(sizeof(char) * ft_nbd(nbr, baselen));
	if (!cnb)
		return (NULL);
	if (nbr < 0)
	{
		cnb[i] = '-';
		nbr = -nbr;
		i++;
	}
	while (nbr >= baselen)
	{
		cnb[i] = base_to[nbr % baselen];
		nbr = nbr / baselen;
		i++;
	}
	cnb[i] = base_to[nbr % baselen];
	i++;
	cnb[i] = '\0';
	return (cnb);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	sign;
	int	nb;
	int	len;

	nb = 0;
	sign = 1;
	len = ft_strlen(base_from);
	while ((*nbr > 8 && *nbr <= 13) || *nbr == 32)
		nbr++;
	while (*nbr == 45 || *nbr == 43)
	{
		if (*nbr == 45)
			sign *= -1;
		nbr++;
	}
	while (*nbr && iofbf(nb, base_from))
	{
		nb = nb * len + iofbf(*nbr, base_from);
		nbr++;
	}
	return (nb * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nb;
	char		*cnb;

	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	if (!check_char_base(nbr, base_from))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	cnb = ft_swap(ft_putnbr_base(nb, base_to));
	return (cnb);
}
/*
#include <stdio.h>
int	main(int c, char **v)
{
	(void)c;
	printf("%s", ft_convert_base(v[1], v[2], v[3]));
	return 0;
}*/
