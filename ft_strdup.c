/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:25:06 by fngoc             #+#    #+#             */
/*   Updated: 2020/10/30 15:25:12 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** ft_strdup: дублирует строку, на
** которую указывает аргумент str.
*/

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	char	*str_dup;
	char	*p;

	str_dup = malloc(ft_strlen(s1) + 1);
	p = str_dup;
	if (str_dup == NULL)
		return (NULL);
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (str_dup);
}
