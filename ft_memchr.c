/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:14:55 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/21 14:35:12 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *start;
	size_t count;

	start = (unsigned char*)str;
	count = 0;
	while (count < n && start[count] != c)
	{
		count++;
	}
	if (start[count] == c)
		return ((void*)&str[count]);
	return (NULL);
}

int	main(void)
{
	const	char	str[] = "hello world";
	const	char	ch = '.';
	char	*ret;
	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
