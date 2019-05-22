/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:03:36 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/22 14:37:11 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			count;

	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	count = 0;
	while (count < n - 1 && s1[count] != '\0' && s2[count] != '\0')
	{
		if (count < n && s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (s1[count] - s2[count]);
}

int	main(void)
{
	char	str1[] = "hellOdsfsdf";
	char	str2[] = "hello";

	char	str3[] = "hellOdfdsdsfsdf";
	char	str4[] = "hello";
	printf("%d", ft_memcmp(str1, str2, 4));
	printf("\n");
	printf("%d", memcmp(str3, str4, 4));

}
