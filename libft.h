/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:39:04 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/22 15:25:53 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	*ft_memset(void *str, int x, size_t len);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memccpy(void *dest, const void *src, int c, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		memcmp(const void *str1, const void *str2, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *str1, const char *str2);
char	*ft_strncat(char *str1, const char *str2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);

#endif
