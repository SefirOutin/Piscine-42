/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:00:52 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 10:34:08 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

int		ft_possible_write(unsigned int n, t_dict *dicts);
void	ft_write_int(unsigned int n, t_dict *dicts);

int	ft_possible_write(unsigned int n, t_dict *dicts)
{
	unsigned int	reste;
	unsigned int	max;

	reste = n;
	if (n == 0)
		return (ft_strlen(ft_value_of_key(0, dicts)) != 0);
	while (reste > 0)
	{
		max = ft_max(reste, dicts);
		if (reste >= 100)
		{
			if (!ft_possible_write(reste / max, dicts))
				return (0);
		}
		else if (reste >= 10 && reste / max != 1)
			return (0);
		if (max == 0)
			return (0);
		reste -= (reste / max) * max;
	}
	return (1);
}

void	ft_write_int(unsigned int n, t_dict *dicts)
{
	unsigned int	reste;
	unsigned int	max;
	int				len;

	if (n == 0)
	{
		len = ft_strlen(ft_value_of_key(0, dicts));
		write(1, ft_value_of_key(0, dicts), len);
	}
	reste = n;
	while (reste > 0)
	{
		max = ft_max(reste, dicts);
		if (reste >= 100)
		{
			ft_write_int(reste / max, dicts);
			write(1, " ", 1);
		}
		len = ft_strlen(ft_value_of_key(max, dicts));
		write(1, ft_value_of_key(max, dicts), len);
		reste -= (reste / max) * max;
		if (reste > 0)
			write(1, " ", 1);
	}
}
