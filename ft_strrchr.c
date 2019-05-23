/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:59:26 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/23 08:33:10 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;
	int count;

	len = 0;
	while (s[len] != '\0')
		len++;
	while (len--)
		if (s[len] == c)
			return ((char*)&s[len]);
	return (NULL);
}
