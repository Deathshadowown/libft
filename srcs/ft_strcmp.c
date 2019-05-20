/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 10:34:38 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/15 10:47:58 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int count;

	count = 0;
	while (str1[count] != '\0' && str2[count] != '\0')
	{
		if (str1[count] != str2[count])
		{
			return (str1[count] - str2[count]);
		}
		count++;
	}
	return (str1[count] - str2[count]);
}
