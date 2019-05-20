/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 12:18:52 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/14 13:36:45 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	size_t count;

	count = 0;
	while (src[count] != '\0' && (count < n))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char	str[] = "hello world";
	char	str2[] = "";

	printf("%s", ft_strncpy(str2, str, 5));
}
