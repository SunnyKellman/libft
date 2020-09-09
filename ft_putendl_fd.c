/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:28:08 by skellman          #+#    #+#             */
/*   Updated: 2019/10/29 20:30:24 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t	c;

	if (s)
	{
		c = ft_strlen(s);
		write(fd, s, c);
		write(fd, "\n", 1);
	}
}
