/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:18:19 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/17 16:54:50 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	len2;

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	len2 = 0;
	while (n && s2[len2] != '\0')
	{
		s1[len + len2] = s2[len2];
		len2++;
		n--;
	}
	s1[len + len2] = '\0';
	return (s1);
}

int	main(void)
{
	char example[100] = "hello ";

	ft_strncat(example, "shane here now and forever", 16);
	printf("%s", example);
}
