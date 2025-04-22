/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:04:13 by asoria            #+#    #+#             */
/*   Updated: 2025/04/20 15:15:17 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void s1, const void s2, size_t n)
{
	int	i;

	i = 0;
	while (s1 != '\0' && s2 != '\0' && n >= 0)
	{
		
	}
	return (0);	
}

#include <string.h>

int	main(int argc, char **argv)
{
	int	n;	
	char	*s1;
	char	*s2;

	(void)argc;
	printf("memcmp: %d", memcmp())
	printf("ft_memcmp: %d", ft_memcmp())
}
