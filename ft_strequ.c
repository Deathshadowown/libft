/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:00:03 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/29 08:50:06 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int count;

	count = 0;

	if (!s1 || !s2)
		return (0);
	while (s1[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (0);
		count++;
	}
	return (1);
}
