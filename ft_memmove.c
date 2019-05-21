/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:24:27 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/21 14:48:12 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *udest;
	unsigned char *usrc;
	unsigned char *bufferdest;
	size_t count;

	bufferdest = NULL; 
	udest = (unsigned char*)dest;
	usrc = (unsigned char*)src;
	count = 0;
	if (!(bufferdest = malloc(n * sizeof(unsigned char))))
		return (NULL);
	while (count < n)
	{
		*bufferdest = usrc[count];
		udest[count] = *bufferdest;
		count++;
	}
	return (udest);
}
