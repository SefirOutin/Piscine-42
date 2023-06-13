/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_manip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:08:15 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 18:47:51 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

unsigned int	ft_max(unsigned int n, t_dict *dicts)
{
	int				i;
	unsigned int	max;

	i = 0;
	max = 0;
	while (dicts[i].key >= 0)
	{
		if ((unsigned int)dicts[i].key > max && (unsigned int)dicts[i].key <= n)
			max = (unsigned int)dicts[i].key;
		i++;
	}
	return (max);
}

char	*ft_value_of_key(unsigned int key, t_dict *dicts)
{
	int	i;

	i = 0;
	while (dicts[i].key >= 0 && (unsigned int)dicts[i].key != key)
		i++;
	if (dicts[i].key == -1)
		return ("");
	return (dicts[i].value);
}

void	ft_set_dict(t_dict *dicts, int i, int key, char *value)
{
	dicts[i].key = key;
	dicts[i].value = value;
}
