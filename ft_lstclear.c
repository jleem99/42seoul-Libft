/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 02:10:54 by jleem             #+#    #+#             */
/*   Updated: 2021/02/04 01:24:13 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_cur;
	t_list	*lst_tmp;

	if (!lst)
		return ;
	lst_cur = *lst;
	while (lst_cur)
	{
		lst_tmp = lst_cur;
		lst_cur = lst_cur->next;
		ft_lstdelone(lst_tmp, del);
	}
	*lst = NULL;
}
