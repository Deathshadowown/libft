/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:43:21 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/22 15:34:27 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t count;

	count = 0;
	while (src[count] != '\0' && (count < n))
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = 0;
		count++;
	}

	return (dest);
}


int	main(void)
{
	char	str[] = "shane is here HELLO ";
	char	str2[] = "here we are people we must go";

	char	str3[] = "shane is here hello ";
	char	str4[] = "here we are people we must go";

	printf("%s, 1st", ft_strncpy(str, str2, 25));
	printf("\n");
	printf("\n");
	printf("%s, 2nd", strncpy(str3, str4, 25));
	printf("\n");
}
