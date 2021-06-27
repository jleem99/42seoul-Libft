/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 04:58:24 by jleem             #+#    #+#             */
/*   Updated: 2021/06/28 05:04:11 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

void	*ft_memdup(void const *src, size_t size)
{
	void	*dest;

	dest = malloc(size);
	ft_memcpy(dest, src, size);
	return (dest);
}
