/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 04:42:25 by asoria            #+#    #+#             */
/*   Updated: 2025/03/30 05:06:08 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Hard-coded 2048 because glibc spits that, but not good
 * for portability, test again in desired architecture.
*/

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (2048);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	c;

	(void)argc;
	c = argv[1][0];
	printf("ft_isdigit: %d\n", ft_isdigit(c));
	printf("isdigit: %d\n", isdigit(c));
	return (0);
}
*/
