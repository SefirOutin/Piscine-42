/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:36:45 by soutin            #+#    #+#             */
/*   Updated: 2023/03/02 10:12:19 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

#define FT_BOOLEAN_H

typedef struct t_bool t_bool
{
	bool	EVEN;
};

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
int	main(int argc, char **argv);
