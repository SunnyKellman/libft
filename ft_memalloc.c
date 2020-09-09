/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:43:06 by skellman          #+#    #+#             */
/*   Updated: 2019/10/28 17:48:33 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh_mem;

	if (!(fresh_mem = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(fresh_mem, size);
	return (fresh_mem);
}
