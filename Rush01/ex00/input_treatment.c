/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_treatment.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:33:11 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/19 13:53:23 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_argument_is_valid(char *c)
{
	int	i;
	int	nb_espaces;
	int	nb_nombres;

	i = 0;
	nb_espaces = 0;
	nb_nombres = 0;
	while (c[i])
	{
		if (c[i] == ' ')
			nb_espaces++;
		if (c[i] >= '1' && c[i] <= '4')
			nb_nombres++;
		if (c[i] != ' ' && (c[i] < '1' || c[i] > '4'))
			return (0);
		if (c[i] == ' ' && c[i + 1] == ' ')
			return (0);
		if (c[i] >= '1' && c[i] <= '4' && c[i + 1] >= '1' && c[i + 1] <= '4')
			return (0);
		i++;
	}
	if (nb_espaces != 15 || nb_nombres != 16)
		return (0);
	return (1);
}

int	convert_arg_to_x(char *chaine, int x_tab[][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		x_tab[0][i] = chaine[i * 2 + 16] - '0';
		i++;
	}
	i = 0;
	while (i < 4)
	{
		x_tab[1][i] = chaine[i * 2 + 24] - '0';
		i++;
	}
	return (1);
}

int	convert_arg_to_y(char *chaine, int y_tab[][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		y_tab[0][i] = chaine[i * 2] - '0';
		i++;
	}
	i = 0;
	while (i < 4)
	{
		y_tab[1][i] = chaine[i * 2 + 8] - '0';
		i++;
	}
	return (1);
}
