/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:43:08 by asoria            #+#    #+#             */
/*   Updated: 2025/05/05 20:10:03 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
        int     i;

        if (!s)
                return ;
        i = 0;  
        while(s[i])
        {
                f(i, &(s[i]));
                i++;
        }
}
