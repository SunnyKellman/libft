/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 19:08:31 by skellman          #+#    #+#             */
/*   Updated: 2019/10/27 19:17:58 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t res;
	size_t s;

	res = 0;
	s = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r' ||
			*str == '\n' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		s = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * s);
}
