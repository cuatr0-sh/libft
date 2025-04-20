/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:08:06 by root              #+#    #+#             */
/*   Updated: 2025/04/20 17:17:56 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*s;
	char	c;

	(void)argc;

	s = argv[1];
	c = argv[2][0];

	printf("strchr: %s\n", strchr(s, c));
	printf("ft_strchr: %s\n", ft_strchr(s, c));

	return (0);
}
*/
