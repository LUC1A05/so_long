/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:30:26 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/09/29 14:56:57 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	m;

	i = 0;
	j = 0;
	k = 0;
	m = 0;
	while (src[i])
	{
		i++;
	}
	while (dst[j])
		j++;
	if (dstsize <= j)
		return (dstsize + i);
	while (src[m] != '\0' && (m < (dstsize - j - 1)))
	{
		dst[j + k] = src[m];
		k++;
		m++;
	}
	dst[j + k] = '\0';
	return (j + i);
}
