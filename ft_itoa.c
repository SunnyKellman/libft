/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:06:39 by skellman          #+#    #+#             */
/*   Updated: 2019/10/31 13:52:37 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_negative(int *n, int *minus)
{
	if (*n < 0)
	{
		*n *= -1;
		*minus = 1;
	}
}

char			*ft_itoa(int n)
{
	long	counter;
	int		i;
	int		minus;
	char	*string;

	counter = n;
	i = 2;
	minus = 0;
	ft_negative(&n, &minus);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (counter /= 10)
		i++;
	i = i + minus;
	if (!(string = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	string[--i] = '\0';
	while (i--)
	{
		string[i] = n % 10 + '0';
		n = n / 10;
	}
	if (minus)
		string[0] = '-';
	return (string);
}
