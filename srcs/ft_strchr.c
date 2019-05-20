/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 08:56:44 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/16 09:26:37 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *str, int c)
{
	int index;

	index = 0;
	while (str[index] != c && str[index] != '\0')
	{
		index++;
	}
	if (str[index] == c)
		return (char *)&str[index];
	return (NULL);
}
