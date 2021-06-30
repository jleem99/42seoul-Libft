/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 00:09:23 by jleem             #+#    #+#             */
/*   Updated: 2021/06/30 23:33:36 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

size_t	ft_strlcat(char *dest, char const *src, size_t dstsize)
{
	size_t const	dstlen = ft_strlen(dest);
	size_t const	srclen = ft_strlen(src);
	size_t const	ret = dstlen + srclen;
	size_t const	cpylen = ft_min(srclen, dstsize - dstlen - 1);

	if (dstlen >= dstsize)
		return (dstsize + srclen);
	ft_memcpy(dest + dstlen, src, cpylen);
	dest[dstlen + cpylen] = '\0';
	return (ret);
}
