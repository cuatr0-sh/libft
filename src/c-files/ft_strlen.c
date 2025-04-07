/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 06:30:39 by asoria            #+#    #+#             */
/*   Updated: 2025/03/30 06:53:49 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	(void)argc;

	a = ft_strlen(argv[1]);
	b = strlen(argv[1]);

	printf("ft_strlen: %d\n", a);
	printf("strlen: %d\n", b);

	return(0);
}
*/
