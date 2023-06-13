/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:45:49 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/19 13:52:39 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	bas(int grille[][4], int y_tab[][4], int y);
int	gauche(int grille[][4], int x_tab[][4], int x, int y);
int	droite(int grille[][4], int x_tab[][4], int x);
int	haut(int grille[][4], int y_tab[][4], int x, int y);
int	check_grille(int grille[][4], int x_tab[][4], int y_tab[][4]);
int	deja_present(int i, int grille[][4], int x, int y);
int	display(int grille[][4]);
void ft_putchar(char c);

int	solve(int position, int grille[][4], int x_tab[][4], int y_tab[][4])
{
	int	x;
	int	y;
	int	i;

	if (check_grille(grille, x_tab, y_tab))
		return (1);
	x = position / 4;
	y = position % 4;
	i = 0;
	while (i <= 3)
	{
		if (deja_present(i + 1, grille, x, y))
		{
			grille[x][y] = i + 1;
			display(grille);
			ft_putchar('\n');
			if (gauche(grille, x_tab, x, y) && droite(grille, x_tab, x))
				if (haut(grille, y_tab, x, y) && bas(grille, y_tab, y))
					if (solve(position + 1, grille, x_tab, y_tab))
						return (1);
		}
		i++;
	}
	if (x <= 3 && y <= 3)
		grille[x][y] = 0;
	return (0);
}
