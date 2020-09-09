/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:14:29 by skellman          #+#    #+#             */
/*   Updated: 2019/11/02 15:22:26 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_w(char const *str, char c)
{
	size_t	words;

	words = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			words++;
			while (*str && *str != c)
				str++;
		}
	}
	return (words);
}

char			**ft_strsplit(char const *str, char c)
{
	size_t	j;
	size_t	k;
	size_t	i;
	char	**arr;

	i = 0;
	j = 0;
	if (!str || !(arr = (char **)ft_memalloc(sizeof(char *)
	* ((ft_w(str, c) + 1)))))
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			k = 0;
			while (str[i + k] && str[i + k] != c)
				k++;
			arr[j++] = ft_strsub(str, i, k);
			i = i + k;
		}
	}
	arr[j] = 0;
	return (arr);
}
