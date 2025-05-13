/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:37:02 by asoria            #+#    #+#             */
/*   Updated: 2025/05/13 21:31:40 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*res;

	bytes = nmemb * size;
	if (size && ((bytes / size) != nmemb))
		return ((void *)0);
	res = malloc(size * nmemb);
	if (!res)
		return ((void *)0);
	else
	{
		ft_bzero(res, size * nmemb);
		return (res);
	}
}
