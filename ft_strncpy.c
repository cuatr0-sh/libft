/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:33:57 by asoria            #+#    #+#             */
/*   Updated: 2026/01/29 16:40:23 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	if (!dst || !src || dsize == 0)
		return (dst);
	i = 0;
	while (i < dsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dsize)
		dst[i] = '\0';
	return (dst);
}
