/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:22:58 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/10/11 11:50:40 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*t;

	len = ft_strlen(s1);
	t = (char *)malloc(len + 1);
	if (t == NULL)
	{
		return (NULL);
	}
	ft_memcpy(t, s1, len);
	t[len] = '\0';
	return (t);
}
