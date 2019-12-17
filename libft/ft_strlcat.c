/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:50:03 by jmakela           #+#    #+#             */
/*   Updated: 2019/11/05 18:04:27 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies and concanates strings.
** It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result.
** Returns total length of string they tried to create.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (dst[j] && j < dstsize)
		j = j + 1;
	i = j;
	while (src[j - i] && j + 1 < dstsize)
	{
		dst[j] = src[j - i];
		j = j + 1;
	}
	if (i < dstsize)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}

