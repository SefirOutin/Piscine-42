/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:57:00 by soutin            #+#    #+#             */
/*   Updated: 2023/02/13 15:25:08 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int a, int b)
{
	int	s;
	int	k;
	int	j;
	int	l;

	s = a / 10 + '0';
	k = a % 10 + '0';
	j = b / 10 + '0';
	l = b % 10 + '0';
	write(1, &s, 1);
	write(1, &k, 1);
	write(1, " ", 1);
	write(1, &j, 1);
	write(1, &l, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a, b);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
