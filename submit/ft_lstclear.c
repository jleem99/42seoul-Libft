/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 02:10:54 by jleem             #+#    #+#             */
/*   Updated: 2021/02/04 03:03:48 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		lst_tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(lst_tmp, del);
	}
	*lst = NULL;
}
