/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 05:06:56 by asoria            #+#    #+#             */
/*   Updated: 2025/04/22 21:49:04 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_strlen(char *str);
int	ft_isalnum(int n);
int	ft_isalpha(int n);
int	ft_isascii(int n);
int	ft_isdigit(int n);
int	ft_isprint(int n);
int	ft_tolower(int ch);
int	ft_toupper(int ch);
int	ft_atoi(const char *str);
int	ft_memcmp(const void s1, const void s2, size_t n);

void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, cont void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);



#endif
