/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:34:49 by soutin            #+#    #+#             */
/*   Updated: 2023/02/15 15:49:48 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		buffer = tab[i];
		tab[i] = tab[size];
		tab[size] = buffer;
		i++;
		size--;
	}
}
