/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:37:24 by asoria            #+#    #+#             */
/*   Updated: 2025/05/06 03:27:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	size;
	char	*src;
	char	*dst;

	(void)argc;

	src = argv[1];
	dst = argv[2];
	size = atoi(argv[3]);


	ft_strlcpy(dst, src, size);
	printf("src: %s\n", src);
	ft_strlcpy(dst, src, size);
	printf("dst: %s\n", dst);

	return (0);
}
*/
