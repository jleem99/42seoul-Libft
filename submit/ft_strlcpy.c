/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 00:09:24 by jleem             #+#    #+#             */
/*   Updated: 2021/02/11 09:56:44 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t dstsize)
{
	size_t	srclen;
	size_t	cpylen;
	size_t	i;

	if (!dest)
		return (0);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	cpylen = (dstsize > srclen) ? srclen : dstsize - 1;
	i = 0;
	while (i < cpylen)
	{
		dest[i] = src[i];
		i++;
	}
	dest[cpylen] = '\0';
	return (srclen);
}
