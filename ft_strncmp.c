/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:29:51 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/28 08:55:45 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	size_t			count;

	us1 = (unsigned char*)s1;
	us2 = (unsigned char*)s2;
	count = 0;
	while (count < n + 1 && us1[count] != '\0' && us2[count] != '\0')
	{
		if (count < n && us1[count] != us2[count])
			return (us1[count] - us2[count]);
		count++;
	}
	return (us1[count] - us2[count]);
}
