/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 21:13:03 by skellman          #+#    #+#             */
/*   Updated: 2019/10/29 18:10:36 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	end;
	size_t	start;

	if (!s)
		return (NULL);
	start = 0;
	while ((s[start] == '\t' || s[start] == '\n' || s[start] == ' ') &&
	s[start])
		start++;
	end = ft_strlen(s) - 1;
	while ((s[end] == '\t' || s[end] == '\n' || s[end] == ' ') && s[end])
		end--;
	if (!s[start])
		return (ft_strnew(1));
	end = end - start + 1;
	return (ft_strsub(s, start, end));
}
