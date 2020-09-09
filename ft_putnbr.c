/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:21:15 by skellman          #+#    #+#             */
/*   Updated: 2019/11/02 16:30:21 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
