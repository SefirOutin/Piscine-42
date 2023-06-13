/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:39:59 by soutin            #+#    #+#             */
/*   Updated: 2023/02/23 00:57:12 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long int	nbr;
	long int	i;

	nbr = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		nbr = nbr * i;
		i++;
	}
	return (nbr);
}
/*
#include<stdio.h>
#include<stdlib.h>
int	main(int c, char **v)
{
	if (c == 2)
		printf("%d", ft_iterative_factorial(atoi(v[1])));
	return (0);
}*/
