/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:36:47 by jleem             #+#    #+#             */
/*   Updated: 2021/06/30 23:15:02 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

long	ft_atol(char const *str)
{
	long	num;
	int		sig;

	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sig = -1;
		str++;
	}
	else
	{
		sig = 1;
		if (*str == '+')
			str++;
	}
	while (ft_isdigit(*str))
	{
		num *= 10;
		num += *(str++) - '0';
	}
	return (sig * num);
}
