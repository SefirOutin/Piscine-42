/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:39:24 by soutin            #+#    #+#             */
/*   Updated: 2023/03/02 20:51:57 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min;
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
#include<stdio.h>
int	main()
{
	int	*range;

	printf("%d....\n", ft_ultimate_range(&range, -10, 80));
//	while (*range)
//	{
//		printf("%d\n", *range);
//		range++;
//	}
	return 0;
}*/
