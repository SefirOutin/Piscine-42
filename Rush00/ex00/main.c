/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaidano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:27:34 by dkaidano          #+#    #+#             */
/*   Updated: 2023/02/17 13:33:43 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

#include<stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		rush(atoi(argv[1]), atoi(argv[2]));
	}
	return (0);
}