/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:24:27 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/21 13:06:26 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *udest;
	unsigned char *usrc;
	unsigned char temp;
	size_t count;

	udest = (unsigned char*)dest;
	usrc = (unsigned char*)src;
	count = 0;
	while (count < n)
	{
		temp = usrc[count];
		udest[count] = temp;
		count++;
	}
	return (udest);
}