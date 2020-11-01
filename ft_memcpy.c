/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:12:48 by fngoc             #+#    #+#             */
/*   Updated: 2020/10/30 11:13:20 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_memcpy: memcpy копирует n байтов первого блока памяти,
** на который ссылается указатель src, во второй блок памяти,
** на который ссылается указатель dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	int		*segfault;

	i = 0;
	segfault = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == NULL || src == NULL)
		*segfault = 1;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		++i;
	}
	return (dst);
}
