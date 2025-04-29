/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:46:35 by root              #+#    #+#             */
/*   Updated: 2025/04/29 13:29:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void s1, const vooid s2, size_t n)
{
	
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("ft_memcmp: %s\n", ft_memcmp(&argv[1], &argv[2], atoi(argv[3])));
	printf("memcmp: %s\n", memcmp(&argv[1], &argv[2], atoi(argv[3])));
	return (0);
}
