/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 00:09:31 by jleem             #+#    #+#             */
/*   Updated: 2021/06/30 23:32:21 by jleem            ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t const	slen = ft_strlen(s);
	size_t			copylen;
	char			*ret;

	if (!s || start >= slen)
		return (ft_strdup(""));
	copylen = ft_min(slen - start, len);
	ret = malloc(sizeof(*ret) * (copylen + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s + start, copylen);
	ret[copylen] = '\0';
	return (ret);
}
