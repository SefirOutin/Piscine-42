/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:36:00 by octoross          #+#    #+#             */
/*   Updated: 2023/05/24 19:24:52 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

void	ft_test_arg(char *nbr, t_dict *dicts)
{
	unsigned int	n;

	if (ft_atoi_arg(nbr) >= 0)
	{
		n = (unsigned int)ft_atoi_arg(nbr);
		if (ft_possible_write(n, dicts))
		{
			ft_write_int(n, dicts);
			write(1, "\n", 1);
		}
		else
			write(1, "Dict error\n", 11);
	}
	else
		write(1, "Error\n", 6);
}

void	ft_try(char *nbr, char *dict_name)
{
	int		win;
	t_dict	*dicts;

	win = 1;
	if (ft_strlen(nbr) > 10 && (nbr[0] != '+' || ft_strlen(nbr) > 11))
	{
		write(1, "Error\n", 6);
		return ;
	}
	if (ft_strlen(nbr) == 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	dicts = ft_parser(dict_name, &win);
	if (!dicts || !win)
	{
		write(1, "Dict error\n", 11);
		return ;
	}
	ft_test_arg(nbr, dicts);
	ft_free_dicts(dicts);
}

int	main(int argc, char **argv)
{
	char	*nbr;
	char	*dict_name;

	if (argc == 2)
	{
		nbr = argv[1];
		dict_name = "numbers.dict";
	}
	else if (argc == 3)
	{
		dict_name = argv[1];
		nbr = argv[2];
	}
	if (argc == 2 || argc == 3)
		ft_try(nbr, dict_name);
	return (0);
}
