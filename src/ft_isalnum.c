/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 05:26:34 by asoria            #+#    #+#             */
/*   Updated: 2025/03/30 05:55:16 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Hard-coded 8 because glibc spits that but its not a good
 * implementation for portability, re-check in your architecture and
 * configuration.
 */

int	ft_isalnum(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
		return (8);
	if (n >= '0' && n <= '9')
		return (8);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	int	c;

	(void)argc;
	c = argv[1][0];
	printf("ft_isalpha: %d\n", ft_isalnum(c));
	printf("isalnum: %d\n", isalnum(c));
	return(0);
}
*/
