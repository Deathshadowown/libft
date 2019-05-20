/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 13:45:40 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/14 15:42:21 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int len;
	int len2;

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		s1[len + len2] = s2[len2];
		len2++;
	}
	s1[len + len2] = '\0';
	return (s1);
}

int	main(void)
{
	char	example[100] = "hello ";

	ft_strcat(example, "shane");
	printf("%s", example);
}
