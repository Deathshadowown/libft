/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:41:04 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/22 15:28:08 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t len;
	size_t len2;

	len = 0;
	while (dest[len] != '\0')
		len++;
	len2 = 0;
	while(len2 + len + 1 < destsize && src[len2] != '\0')
	{
		dest[len + len2] = src[len2];
		len2++;
	}
	dest[len + len2] = src[len2];
	return (len + len2);
}
