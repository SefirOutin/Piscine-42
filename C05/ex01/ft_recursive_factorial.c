/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:00:40 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 13:14:56 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}
/*
#include<stdio.h>
#include<stdlib.h>
int	main(int c, char **v)
{
	if (c == 2)
		printf("%d", ft_recursive_factorial(atoi(v[1])));
	return (0);
}*/
