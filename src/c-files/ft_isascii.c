/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 05:56:45 by asoria            #+#    #+#             */
/*   Updated: 2025/03/30 06:16:45 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
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
	printf("ft_isascii: %d\n", ft_isascii(c));
	printf("isascii: %d\n", isascii(c));
	return (0);
}
*/
