/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:44:44 by root              #+#    #+#             */
/*   Updated: 2025/05/06 03:41:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = ((void *)0);
	while (*s)
	{
		if (*s == c)
			ptr = ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("strrchr: %s\n", strrchr(argv[1], argv[2][0]));
	printf("ft_strrchr: %s\n", ft_strrchr(argv[1], argv[2][0]));
}*/
