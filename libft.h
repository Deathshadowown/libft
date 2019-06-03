/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:39:04 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/30 12:52:40 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_iswhitespace(char c);
//my own functions up
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
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *string, const char *word);
char	*ft_strnstr(const char *string, const char *word, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *str, int fd);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *str);
//void	ft_striter(char *str, void (*f)(char *));
//void	ft_striteri(char *str, void (*f)(unsigned int, char *));
//char	*ft_strmap(char const *str, char (*f)(char));
//char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);

#endif
