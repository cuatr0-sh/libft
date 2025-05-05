/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:50:03 by asoria            #+#    #+#             */
/*   Updated: 2025/05/05 19:51:18 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strtrim(const char *str, const char *set)
{
	size_t			b;
	size_t			e;
	size_t			i;
	char			*out;

	if (!str)
		return (NULL);
	if (!set || !set[0] || !str[0])
		return (ft_strdup(str));
	i = 0;
	b = 0;
	e = ft_strlen(str) - 1;
	while (in_set(str[b], set) >= 0)
		b++;
	while (e > b && in_set(str[e], set) >= 0)
		e--;
	out = malloc((e - b) + 2);
	if (!out)
		return (NULL);
	while (b <= e)
		out[i++] = str[b++];
	out[i] = 0;
	return (out);
}
