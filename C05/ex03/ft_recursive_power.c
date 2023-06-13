/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:39:57 by soutin            #+#    #+#             */
/*   Updated: 2023/03/01 14:20:53 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include<stdlib.h>
#include<stdio.h>
int	main(int c, char **v)
{
	if (c == 3)
		printf("%d", ft_recursive_power(atoi(v[1]), atoi(v[2])));
	return 0;
}*/
