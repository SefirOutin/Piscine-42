/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:53:07 by soutin            #+#    #+#             */
/*   Updated: 2023/03/02 18:09:33 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_atoi_base(char *nbr, char *base_from);
char	*ft_putnbr_base(long int nbr, char *base_to);

int	ft_strlen(char *a)
{
	int		i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*ft_swap(char *str)
{
	int		len;
	int		i;
	char	buffer;

	i = 0;
	if (str[i] == 45)
		i++;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		buffer = str[i];
		str[i] = str[len];
		str[len] = buffer;
		i++;
		len--;
	}
	return (str);
}

int	ft_nbd(long int nb, int baselen)
{
	int	nbd;

	nbd = 0;
	if (nb < 0)
		nbd++;
	while (nb >= baselen)
	{
		nb /= baselen;
		nbd++;
	}
	return (nbd);
}

int	good(char a, char *base)
{
	while (*base)
	{
		if (a == *base)
			return (1);
		base++;
	}
	return (0);
}

int	check_char_base(char *nbr, char *base)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (!good(nbr[i], base))
			return (0);
		i++;
	}
	return (1);
}
