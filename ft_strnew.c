/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:56:24 by skellman          #+#    #+#             */
/*   Updated: 2019/10/28 18:46:22 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh_string;

	if (!(fresh_string = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	*fresh_string = '\0';
	while (size)
	{
		fresh_string[size] = '\0';
		size--;
	}
	return (fresh_string);
}
