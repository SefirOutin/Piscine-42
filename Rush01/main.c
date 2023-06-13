/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:38:43 by soutin            #+#    #+#             */
/*   Updated: 2023/02/19 12:59:47 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	str_is_not_ok(char *str)
{
	int	i;
	int	nb_space;
	int	nb_nb;

	nb_nb = 0;
	nb_space = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == 32)
			nb_space++;
		if (str[i] >= 49 && str[i] <= 52)
			nb_nb++;
		if (str[i] < 49 && str[i] > 52 && str[i] != 32)
			return (1);
		if (str[i] == 32 && str[i + 1] == 32)
			return (1);
		if (str[i] >= 49 && str[i] <= 52 && str[i + 1] != 32 && str[i + 1] != '\0')
			return (1);
		if (str[0] == 32)
			return (1);
		i++;
	}
	if (nb_nb != 16 || nb_space != 15)
		return (1);
	return (0);
}

int	*ft_strtoi(char *str, int i, int m)
{
	int	c;
	static int	tab[4];

	c = 0;
	while (i < m)
	{
		if (str[i] >= 49 && str[i] <= 52)
		{
			tab[c] = str[i] - 48;
			c++;
		}
		i++;
	}
	return (tab);
}

int	main(int argc, char **v)
{
	int	*x1;
	int	*x2;
	int	*y1;
	int	*y2;

	if (argc == 2)
	{
		if (ft_strlen(v[1]) != 31)
		{
			print_error();
			return (0);
		}
		if (str_is_not_ok(v[1]))
		{
			print_error();
			return (0);
		}
		x1 = ft_strtoi(v[1], 0, 7);
		x2 = ft_strtoi(v[1], 8, 15);
		y1 = ft_strtoi(v[1], 16, 23);
		y2 = ft_strtoi(v[1], 24, 31);
		write(1, "ok", 2);
	}
	else
		print_error();
	return (0);

}
