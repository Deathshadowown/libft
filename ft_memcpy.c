/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:15:17 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/21 11:38:33 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char *udest;
	unsigned char *usrc;
	size_t count;

	udest = (unsigned char*)dest;
	usrc = (unsigned char*)src;
	count = 0;
	while (count < len && usrc[count] != '\0')
	{
		udest[count] = usrc[count];
		count++;
	}
	return (udest);
}
