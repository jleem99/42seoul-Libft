/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 00:09:24 by jleem             #+#    #+#             */
/*   Updated: 2021/02/14 12:19:53 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	return (a > b ? b : a);
}

size_t			ft_strlcpy(char *dest, char const *src, size_t dstsize)
{
	size_t	srclen;
	size_t	cpylen;
	size_t	i;

	if (!dest)
		return (0);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	cpylen = ft_min(srclen, dstsize - 1);
	i = 0;
	while (i < cpylen)
	{
		dest[i] = src[i];
		i++;
	}
	dest[cpylen] = '\0';
	return (srclen);
}
