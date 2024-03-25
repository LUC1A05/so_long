/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:12:05 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/09/29 14:32:39 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d1;
	const unsigned char	*d2;
	size_t				i;

	d1 = (const unsigned char *)s1;
	d2 = (const unsigned char *)s2;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			if (d1[i] != d2[i])
				return (d1[i] - d2[i]);
			i++;
		}
	}
	return (0);
}
