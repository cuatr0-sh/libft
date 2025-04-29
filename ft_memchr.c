/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:50:15 by asoria            #+#    #+#             */
/*   Updated: 2025/04/28 16:06:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	ch = (unsigned char)c;
	str = (unsigned char *)arr;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("memchr: %s\n", memchr(&argv[1], atoi(argv[2]), (size_t)atoi(argv[3])));
	printf("ft_memchr: %s\n", ft_memchr(&argv[1], atoi(argv[2]), (size_t)atoi(argv[3])));
	return (0);
}
