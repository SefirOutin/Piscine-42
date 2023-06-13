/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_final.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:27:15 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/19 11:29:01 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_saut_gauche(int grille[][4], int x_tab[][4])
{
	int	max;
	int	j;
	int	nb_saut;
	int	i;

	i = 0;
	while (i <= 3)
	{
		max = 0;
		nb_saut = 0;
		j = 0;
		while (j <= 3)
		{
			if (max < grille[i][j])
			{
				max = grille[i][j];
				nb_saut = nb_saut + 1;
			}
			j++;
		}
		if (nb_saut != x_tab[0][i])
			return (0);
		i++;
	}
	return (1);
}

int	nb_saut_droite(int grille[][4], int x_tab[][4])
{
	int	max;
	int	j;
	int	nb_saut;
	int	i;

	i = 0;
	while (i <= 3)
	{
		max = 0;
		nb_saut = 0;
		j = 3;
		while (j >= 0)
		{
			if (max < grille[i][j])
			{
				max = grille[i][j];
				nb_saut = nb_saut + 1;
			}
			j--;
		}
		if (nb_saut != x_tab[1][i])
			return (0);
		i++;
	}
	return (1);
}

int	nb_saut_haut(int grille[][4], int y_tab[][4])
{
	int	max;
	int	j;
	int	nb_saut;
	int	i;

	i = 0;
	while (i <= 3)
	{
		max = 0;
		nb_saut = 0;
		j = 0;
		while (j <= 3)
		{
			if (max < grille[j][i])
			{
				max = grille[j][i];
				nb_saut = nb_saut + 1;
			}
			j++;
		}
		if (nb_saut != y_tab[0][i])
			return (0);
		i++;
	}
	return (1);
}

int	nb_saut_bas(int grille[][4], int y_tab[][4])
{
	int	max;
	int	j;
	int	nb_saut;
	int	i;

	i = 0;
	while (i <= 3)
	{
		max = 0;
		nb_saut = 0;
		j = 3;
		while (j >= 0)
		{
			if (max < grille[j][i])
			{
				max = grille[j][i];
				nb_saut = nb_saut + 1;
			}
			j--;
		}
		if (nb_saut != y_tab[1][i])
			return (0);
		i++;
	}
	return (1);
}

int	check_grille(int grille[][4], int x_tab[][4], int y_tab[][4])
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
				return (0);
			j++;
		}
		i++;
	}
	if (!nb_saut_gauche(grille, x_tab))
		return (0);
	if (!nb_saut_droite(grille, x_tab))
		return (0);
	if (!nb_saut_haut(grille, y_tab))
		return (0);
	if (!nb_saut_bas(grille, y_tab))
		return (0);
	return (1);
}
