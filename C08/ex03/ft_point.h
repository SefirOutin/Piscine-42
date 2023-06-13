/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:52:57 by soutin            #+#    #+#             */
/*   Updated: 2023/03/02 10:01:42 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H

#define FT_POINT_H

typedef struct	t_point t_point
{
	int	x;
	int	y;
};

void	set_point(t_point *point);
int	main(void);
