/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:35:40 by erigolon          #+#    #+#             */
/*   Updated: 2023/04/21 16:29:49 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*str1;

	str1 = (unsigned char *)str;
	count = 0;
	while (count < n)
	{
		str1[count] = (unsigned char)c;
		count++;
	}
	return (str);
}
