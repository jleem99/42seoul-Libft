/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 00:09:29 by jleem             #+#    #+#             */
/*   Updated: 2021/06/30 23:30:24 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i-- != 0)
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}
