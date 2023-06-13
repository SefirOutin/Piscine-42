/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:47:04 by soutin            #+#    #+#             */
/*   Updated: 2023/02/26 11:57:02 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s);
int	ft_strtablen(char **s);
int	ft_is_printable(char *s);
int	ft_char_is_sep(char c, char *sep);
int	ft_char_is_printable(char s);

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strtablen(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_is_printable(char *s)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (s[i])
	{
		c = (unsigned char)s[i];
		if (c < 32 || c > 126)
			return (0);
		i++;
	}
	return (1);
}

int	ft_char_is_printable(char s)
{
	unsigned char	c;

	c = (unsigned char)s;
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

int	ft_char_is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] && sep[i] != c)
		i++;
	if (sep[i] == '\0')
		return (0);
	return (1);
}
