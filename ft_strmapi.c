/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:32:52 by asoria            #+#    #+#             */
/*   Updated: 2025/05/06 03:51:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*d;

	d = ft_strdup(s);
	if (!d)
		return ((void *)0);
	i = 0;
	while (d[i])
	{
		d[i] = f(i, d[i]);
		i++;
	}
	return (d);
}
