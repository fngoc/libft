/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:42:46 by fngoc             #+#    #+#             */
/*   Updated: 2020/10/31 15:42:48 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_split: Выделяет и возвращает массив строк,
** полученных путем разделения 's' с помощью
** символ ’c’ в качестве разделителя.
** Массив должен быть заканчивается указателем NULL.
*/

char	*get_str(char *str, char c, int *iterator)
{
	char *p;
	int flag;

	p = NULL;
	while (str[*iterator] != '\0')
	{
		if (flag && str[*iterator] == c)
			break ;
		if (str[*iterator] != c)
		{
			flag = 1;
			*p++ = str[*iterator];
		}
		else
			++(*iterator);
	}
	if (p != NULL)
		return (p);
	return (NULL);
}

int		ft_word_count(char const *s, char c)
{
	int	state;
	int	word_count;
	state = 0;
	word_count = 0;
	while (*s)
	{
		if(*s == c)
		{
			state = 0;
			s++;
		}
		else if (state == 0)
		{
			state = 1;
			word_count++;
			s++;
		}
		else
			s++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	char	*gs;
	int		tmp;
	int		col_words;
	int		iterator;

	iterator = 0;
	tmp = 0;
	if (s == NULL)
		return (NULL);
	col_words = ft_word_count(s, c);
	if (!(p = malloc(sizeof(char *) * col_words)))
		return (NULL);
	while ((gs = get_str((char *)s, c, &iterator)) != NULL)
	{
		while (*gs)
			p[tmp++] = gs;
	}
	p[++tmp] = NULL;
	return (p);
}
