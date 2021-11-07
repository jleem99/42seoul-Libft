/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 00:08:54 by jleem             #+#    #+#             */
/*   Updated: 2021/11/07 16:10:40 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <limits.h>

static int	ft_isspace(int c)
{
	return (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ');
}

int	is_erange(unsigned int acc, char digit, int sig)
{
	unsigned int	new_acc;
	unsigned int	max_acc;

	new_acc = acc * 10 + (digit - '0');
	if (sig == -1)
		max_acc = -INT_MIN;
	else
		max_acc = INT_MAX;
	if (new_acc > max_acc)
	{
		errno = ERANGE;
		return (1);
	}
	return (0);
}

int	ft_atoi(char const *str)
{
	unsigned int	acc;
	int				sig;

	acc = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sig = -1;
	else
		sig = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str) && !is_erange(acc, *str, sig))
	{
		acc *= 10;
		acc += *(str++) - '0';
	}
	if (!ft_isdigit(*str))
		return (sig * (int)acc);
	if (sig == -1)
		return (INT_MIN);
	else
		return (INT_MAX);
}
