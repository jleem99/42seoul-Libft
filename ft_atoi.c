/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 00:08:54 by jleem             #+#    #+#             */
/*   Updated: 2021/02/13 21:47:41 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isspace(int c)
{
	return (c == '\t' ||
			c == '\n' ||
			c == '\v' ||
			c == '\f' ||
			c == '\r' ||
			c == ' ');
}

static int	check_range(unsigned long long num, int sig)
{
	if (num > LLONG_MAX - 1 && sig == -1)
		return (0);
	if (num > LLONG_MAX && sig == 1)
		return (-1);
	return (num * sig);
}

int			ft_atoi(char const *str)
{
	unsigned long long	num;
	int					sig;

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
	return (check_range(num, sig));
}
