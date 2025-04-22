/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:37:24 by asoria            #+#    #+#             */
/*   Updated: 2025/04/10 22:01:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (size);
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
