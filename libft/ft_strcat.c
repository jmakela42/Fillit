/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 07:56:43 by jmakela           #+#    #+#             */
/*   Updated: 2019/11/05 17:14:45 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends src to the dest string.
** Overwrites '\0' and adds new terminator to dest.
** Dest must be large enough or behavior is unpredictable.
** Returns a pointer to resulting string dest.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	size_t dest;
	size_t i;

	i = 0;
	dest = ft_strlen(s1);
	if (dest == 0)
	{
		while (s2[i])
		{
			s1[i] = s2[i];
			i = i + 1;
		}
		s1[i] = '\0';
		return (s1);
	}
	while (i < ft_strlen(s2) && s2[i])
	{
		s1[dest + i] = s2[i];
		i = i + 1;
	}
	s1[dest + i] = '\0';
	return (s1);
}
