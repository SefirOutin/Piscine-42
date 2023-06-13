/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:52:33 by soutin            #+#    #+#             */
/*   Updated: 2023/02/15 16:05:59 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	h;
	int	buf;

	i = 0;
	while (i < size - 1)
	{
		h = i + 1;
		while (h < size)
		{
			if (tab[i] > tab[h])
			{
				buf = tab[i];
				tab[i] = tab[h];
				tab[h] = buf;
			}
			h++;
		}
		i++;
	}
}
