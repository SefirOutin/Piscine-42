/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atois.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:13:08 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 10:17:29 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

long int	ft_atoi_arg(char *str);
int			ft_atoi_dict(char *str);

long int	ft_atoi_arg(char *str)
{
	long int	nbr;
	int			i;

	i = 0;
	nbr = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			return (-1);
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (nbr > UINT_MAX || str[i] != '\0')
		return (-1);
	return (nbr);
}

int	ft_atoi_dict(char *str)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			return (-1);
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (nbr > INT_MAX)
		return (-1);
	return (nbr);
}
