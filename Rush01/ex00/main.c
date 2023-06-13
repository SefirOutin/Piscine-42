/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:20:22 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/19 11:54:10 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_argument_is_valid(char *chaine);
int	convert_arg_to_x(char *chaine, int x_tab[][4]);
int	convert_arg_to_y(char *chaine, int y_tab[][4]);
int	solve(int position, int grille[][4], int x_tab[][4], int y_tab[][4]);
int	display(int grille[][4]);

int	main(int argc, char *argv[])
{
	char			*chaine;
	int				x_tab[2][4];
	int				y_tab[2][4];
	int				grille[4][4];

	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	chaine = argv[1];
	if (!check_argument_is_valid(chaine))
	{
		write (1, "Error\n", 6);
		return (0);
	}
	convert_arg_to_x(chaine, x_tab);
	convert_arg_to_y(chaine, y_tab);
	solve(0, grille, x_tab, y_tab);
	display(grille);
	return (0);
}
