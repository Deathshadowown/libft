/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:25:48 by svan-nie          #+#    #+#             */
/*   Updated: 2019/06/06 08:49:15 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *word, size_t len)
{
	size_t count;
	size_t count2;

	count = 0;
	count2 = 0;
	if (word[count] == '\0')
		return ((char *)&s[count]);
	while (len && (s[count] != '\0'))
	{
		while (s[count + count2] == word[count2] && word[count2] && len)
		{
			count2++;
			len--;
		}
		if (word[count2] == '\0')
		{
			return ((char*)&s[count]);
		}
		count2 = 0;
		len--;
		count++;
	}
	return (NULL);
}
