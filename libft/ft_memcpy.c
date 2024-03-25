/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:30:51 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/09/29 15:02:44 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					cont;
	unsigned char			*s;
	unsigned char			*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	cont = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (cont < n)
	{
		d[cont] = s[cont];
		cont++;
	}
	return (dst);
}
