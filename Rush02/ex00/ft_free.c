/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:37:54 by soutin            #+#    #+#             */
/*   Updated: 2023/02/25 19:58:36 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

void	ft_free_dicts(t_dict *dicts);
void	ft_free_tab(char **split, int to_free_until);

void	ft_free_dicts(t_dict *dicts)
{
	int	i;

	i = 0;
	if (!dicts)
		return ;
	while (dicts[i].key != -1)
	{
		free(dicts[i].value);
		i++;
	}
	free(dicts);
}

void	ft_free_tab(char **split, int to_free_until)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (i < to_free_until)
	{
		free(split[i]);
		i++;
	}
	free(split);
}
