/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:48:07 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 18:44:33 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

void	print_dict(t_dict *dicts)
{
	int	i;

	i = 0;
	while (dicts[i].key >= 0)
	{
		printf("key : %d, value : %s\n", dicts[i].key, dicts[i].value);
		i++;
	}
}

void	print_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("\n");
}
