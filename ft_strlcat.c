/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:41:04 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/20 16:08:50 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t len;
	
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;
	
	len = 0;
	i = 0;
	while (dest[i] && len < size)
	{
		len++;
	}
	i = len;
	while (src[len - i] && len + i < size)
	{
		dest[len] = src[len - 1];
		len++;
	}
	if (i < size)
		dest[len] = '\0';
	return (i + ft_strlen(src));
}

int	main(void)
{
	char	str[50] = "hello ";

	ft_strlcat(str, "shane", 20);
	printf("%s", str);
}
