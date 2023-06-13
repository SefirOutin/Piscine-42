/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:07:23 by soutin            #+#    #+#             */
/*   Updated: 2023/03/02 18:33:59 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int *) malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
#include<stdio.h>
int	main()
{
	int	i = 0;
	int	*t;

	t = ft_range(10, 50);
	while(t[i])
	{
		printf("%d ", t[i]);
		i++;
	}
	free(t);
	return 0;
}*/
