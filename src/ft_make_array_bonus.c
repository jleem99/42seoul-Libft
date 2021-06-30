/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_array_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:16:26 by jleem             #+#    #+#             */
/*   Updated: 2021/06/30 23:18:56 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_array	*ft_make_array(size_t size)
{
	t_array *const	array = malloc(sizeof(t_array));

	if (!array)
		return (NULL);
	array->data = malloc(sizeof(void *) * size);
	if (!array->data && size != 0)
	{
		free(array);
		return (NULL);
	}
	array->size = size;
	return (array);
}
