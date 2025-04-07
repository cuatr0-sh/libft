/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:14:24 by asoria            #+#    #+#             */
/*   Updated: 2025/03/30 16:37:30 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned long int n)
{
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	charnum;
	char	fill;
	char	*string[20];
	
	i = 0;
	charnum = atoi(argv[3]);
	fill = argv[2][0];
	while (argv[1][i] != '\0')
	{
		string[i] = argv[1];
		i++;
	}
	printf("ft_memset: %s\n", ft_memset(argv[1], argv[2][0], atoi(argv[3])));
	printf("memset: %s\n", ft_memset(argv[1], argv[2][0], atoi(argv[3])));
	return (0);
}
