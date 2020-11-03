/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:42:20 by fngoc             #+#    #+#             */
/*   Updated: 2020/10/31 15:42:24 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strtrim: Выделяет и возвращает копию
** 'S1' с удаленными символами, указанными
** в 'set' от начала и до конца строки.
*/

int		is_here_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			else
			{
				if (set[j + 1] == '\0')
					return (i);
				else
					++j;
			}
		}
		++i;
	}
	return (i);
}

int		is_here_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			else
			{
				if (set[j + 1] == '\0')
					return (i);
				else
					++j;
			}
		}
		--i;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = 0;
	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (set[0] == '\0' || s1[0] == '\0')
		return ((char *)s1);
	start = is_here_start(s1, set);
	end = is_here_end(s1, set);
	if (!(p = malloc(ft_strlen(s1) + 1)))
		return (NULL);
	if ((size_t)start == ft_strlen(s1))
		*p = '\0';
	else
		p = ft_substr(s1, start, (end - start) + 1);
	return (p);
}
