/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:21:55 by asoria            #+#    #+#             */
/*   Updated: 2025/04/22 18:52:59 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t srclen;

	srclen = 0;
	dstlen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	while (dst[dstlen] != '\0' && dstlen < size)
	{
		dstlen++;
	}
	if (dstlen == size)
	{
		return (size + srclen);
	}
	if (srclen < size - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + dstlen, src, size - dstlen - 1);
		dst[size - 1] = '\0';
	}
	return (dstlen + srclen);
}
