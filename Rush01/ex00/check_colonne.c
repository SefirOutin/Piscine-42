/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_colonne.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:00:50 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/19 13:53:07 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	haut(int grille[][4], int y_tab[][4], int x, int y)
{
	int	j;
	int	nb_saut;
	int	max;
	int	final_check;

	j = 0;
	nb_saut = 0;
	max = 0;
	final_check = 0;
	if (x == 3)
		final_check = 1;
	while (j <= 3)
	{
		if (!final_check && nb_saut > y_tab[0][y])
			return (0);
		if (max < grille[j][y])
		{
			max = grille[j][y];
			nb_saut = nb_saut + 1;
		}
		j++;
	}
	if (final_check && nb_saut != y_tab[0][y])
		return (0);
	return (1);
}

int	bas(int grille[][4], int y_tab[][4], int y)
{
	int	j;
	int	nb_saut;
	int	max;

	j = 3;
	nb_saut = 0;
	max = 0;
	while (j >= 0)
	{
		if (j == 3 && grille[j][y] == 0)
			break ;
		else
		{
			if (nb_saut > y_tab[1][y])
				return (0);
			if (max < grille[j][y])
			{
				max = grille[j][y];
				nb_saut = nb_saut + 1;
			}
		}
		j--;
	}
	return (1);
}
