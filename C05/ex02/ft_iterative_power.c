/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:02:03 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 13:15:24 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	long int	i;
	long int	nbr;

	i = 1;
	nbr = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		nbr = nbr * nb;
		i++;
	}
	return (nbr);
}
/*
#include<stdlib.h>
#include<stdio.h>
int	main(int c, char **v)
{
	if (c == 3)
	{
		printf("%d", ft_iterative_power(atoi(v[1]), atoi(v[2])));
	}
	return (0);
}*/
