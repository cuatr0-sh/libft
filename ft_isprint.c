/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 05:56:45 by asoria            #+#    #+#             */
/*   Updated: 2025/05/06 03:49:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Hard-coded 16384 cause glibc but not good for portability
 * re-check in your own architecture and options.
 *
 */

int	ft_isprint(int n)
{
	if (n >= 32 && n <= 126)
		return (16384);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	int	c;

	(void)argc;
	(void)argv;
	c = '\n';
	printf("ft_isprint newline: %d\n", ft_isprint(c));
	printf("isprint newline: %d\n", isprint(c));
	c = 'A';
	printf("ft_isprint 'A': %d\n", ft_isprint(c));
	printf("isprint 'A': %d\n", isprint(c));
	return (0);
}
*/
