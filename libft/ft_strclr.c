/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 12:13:45 by fngoc             #+#    #+#             */
/*   Updated: 2020/11/08 12:13:47 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strclr: очищает строку.
*/

void	ft_strclr(char *s)
{
	if (s)
		while (*s)
			*s++ = '\0';
}