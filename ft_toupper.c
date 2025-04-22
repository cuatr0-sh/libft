/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:07:15 by asoria            #+#    #+#             */
/*   Updated: 2025/04/09 20:15:44 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	int	final_ch;

	final_ch = ch;
	if (ch >= 97 && ch <= 122)
	{
		final_ch = ch - 32;
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

	ch = 'r';
	
	res = toupper(ch);
	printf("toupper: %d\n", res);
	
	res = ft_toupper(ch);
	printf("ft_toupper: %d\n", res);
	return (0);
}
*/
