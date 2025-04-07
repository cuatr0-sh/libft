/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 03:39:43 by asoria            #+#    #+#             */
/*   Updated: 2025/03/30 04:40:50 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * Hard-coded 1024 because glibc spits out that value, but for portability
 * reasons this is not good implementation, test in desired architecture.
*/
int	ft_isalpha(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
		return (1024);
	return (0);
}
/*
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
int	main(int argc, char **argv)
{
	(void)argc;
	int	c;

	c = argv[1][0];
	printf("ft_isalpha: %d\n", ft_isalpha(c));
	printf("isalpha: %d\n", isalpha(c));
	return (0);	
}
*/
