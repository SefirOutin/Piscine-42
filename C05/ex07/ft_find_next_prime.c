/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:30:39 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 13:17:06 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include<stdio.h>
#include<stdlib.h>
int	main(int c, char **v)
{
	if (c == 2)
		printf("%d", ft_find_next_prime(atoi(v[1])));
	return 0;
}*/
