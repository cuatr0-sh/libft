/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:07:15 by asoria            #+#    #+#             */
/*   Updated: 2025/04/10 22:51:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	int	final_ch;

	final_ch = ch;
	if (ch >= 65 && ch <= 90)
	{
		final_ch = ch + 32;
	}
	return (final_ch);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	ch;
	int	res;

	(void)argc;
	(void)argv;

	ch = 'R';
	
	res = tolower(ch);
	printf("toupper: %d\n", res);
	
	res = ft_tolower(ch);
	printf("ft_toupper: %d\n", res);
	return (0);
}
*/
