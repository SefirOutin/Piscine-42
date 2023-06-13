/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:30:35 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/19 13:50:32 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	test_display(int grille[][4])
{
	int	i;
	int	j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			if (grille[i][j] == 0)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	display(int grille[][4])
{
	int	i;
	int	j;

	i = 0;
	//if (test_display(grille))
	//{
		while (i <= 3)
		{
			j = 0;
			while (j <= 3)
			{
				ft_putchar(grille[i][j] + '0');
				if (j != 3)
					ft_putchar(' ');
				j++;
			}
			i++;
			write(1, "\n", 1);
		}
	//}
	//else
	//	write(1, "Error\n", 6);
	return (0);
}
