/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:50:49 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/21 12:23:29 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char *udest;
	unsigned char *usrc;
	size_t count;

	udest = (unsigned char*)dest;
	usrc = (unsigned char*)src;
	count = 0;
	while (count < len || count == c)
	{
		udest[count] = usrc[count];
		count++;
	}
	return (udest);
}
