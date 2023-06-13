/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ligne.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:36:26 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/19 10:08:49 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	gauche(int grille[][4], int x_tab[][4], int x, int y)
{
	int	j;
	int	nb_saut;
	int	max;
	int	final_check;

	j = 0;
	nb_saut = 0;
	max = 0;
	final_check = 0;
	if (y == 3)
		final_check = 1;
	while (j <= 3)
	{
		if (!final_check && nb_saut > x_tab[0][x])
			return (0);
		if (max < grille[x][j])
		{
			max = grille[x][j];
			nb_saut = nb_saut + 1;
		}
		j++;
	}
	if (final_check && nb_saut != x_tab[0][x])
		return (0);
	return (1);
}

int	droite(int grille[][4], int x_tab[][4], int x)
{
	int	j;
	int	nb_saut;
	int	max;

	j = 3;
	nb_saut = 0;
	max = 0;
	while (j >= 0)
	{
		if (j == 3 && grille[x][j] == 0)
			break ;
		else
		{
			if (nb_saut > x_tab[1][x])
				return (0);
			if (max < grille[x][j])
			{
				max = grille[x][j];
				nb_saut = nb_saut + 1;
			}
		}
		j--;
	}
	return (1);
}
