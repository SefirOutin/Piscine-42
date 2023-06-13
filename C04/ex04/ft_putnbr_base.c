/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:40:27 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 20:30:18 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *a)
{
	int	i;
	int	c;
	int	size;

	i = 0;
	size = ft_strlen(a);
	if (size <= 1)
		return (1);
	while (i < size - 1)
	{
		c = i + 1;
		if (a[i] == 45 || a[i] == 43)
			return (1);
		if (a[i] < 33 || a[i] == 127)
			return (1);
		while (c < size)
		{
			if (a[i] == a[c])
				return (1);
			c++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	base_len;
	long int	nb;

	nb = nbr;
	base_len = ft_strlen(base);
	if (ft_check_base(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base);
		ft_putchar(base[nb % base_len]);
	}
	else
		ft_putchar(base[nb % base_len]);
}

#include<stdlib.h>
#include<stdio.h>
int	main(int c, char **v)
{
	if (c == 3)
		ft_putnbr_base(atoi(v[1]), v[2]);
	return 0;
}
