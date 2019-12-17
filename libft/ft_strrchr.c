/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:41:57 by jmakela           #+#    #+#             */
/*   Updated: 2019/11/05 13:28:24 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the last occurrence of the character c in the string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = ft_strlen(s);
	tmp = (char*)s;
	while (*tmp != '\0')
		tmp = tmp + 1;
	while (i >= 0)
	{
		if (*tmp == c)
			return (tmp);
		tmp = tmp - 1;
		i = i - 1;
	}
	return (NULL);
}
