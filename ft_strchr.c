/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:44:44 by root              #+#    #+#             */
/*   Updated: 2025/04/27 17:41:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ((void *)0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("strchr: %s\n", strchr(argv[1], argv[2][0]));
	printf("ft_strchr: %s\n", ft_strchr(argv[1], argv[2][0]));
}*/
