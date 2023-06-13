/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:21:46 by soutin            #+#    #+#             */
/*   Updated: 2023/03/02 10:32:24 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	char	*copy;

	i = 0;
	while ((*av)[i])
	{
		s_stock_str.size[i] = ft_strlen((*av)[i]);
		s_stock_str.str[i] = (*av)[i];
		s_stock_str.copy[i] = ft_strcpy(copy, (*av)[i]);
		i++;
	}
	return (s_stock_str);
}
