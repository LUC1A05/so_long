/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:35:50 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/10/11 13:40:42 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ha;
	char	*ne;

	i = 0;
	j = 0;
	ne = (char *)needle;
	ha = (char *)haystack;
	if (ne[i] == '\0')
		return (ha);
	while (ha[i] && i < len)
	{
		while (ha[i + j] == ne[j] && i + j < len)
		{
			j++;
			if (ne[j] == '\0')
				return (&ha[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
