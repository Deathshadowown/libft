/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:41:23 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/23 13:58:52 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	nbr;
	int	negative;
	int	i;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\f') || (str[i] == '\v') ||
		(str[i] == '\r') || (str[i] == '\t') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}
