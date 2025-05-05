/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:08:39 by asoria            #+#    #+#             */
/*   Updated: 2025/05/05 18:32:19 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*str;
	size_t	len;
	
	if (!s)
		return ((void *)0);
	len = ft_strlen(s) + 1;
	str = malloc(len);
	ft_memcpy(str, s, len);
	return (str);
}
