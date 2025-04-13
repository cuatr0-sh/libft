/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 00:02:52 by root              #+#    #+#             */
/*   Updated: 2025/04/13 00:12:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(int argc, char **argv)
{
	char	*str;
	size_t	n;

	(void)argc;

	str = argv[1];
	n = atoi(argv[2]);

	ft_bzero(str, n);

	

	return (0);
}
*/
