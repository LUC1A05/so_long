/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:37:55 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/09/25 16:51:51 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = 0;
	while (s[i] != 0)
	{
		if (s[i] == (unsigned char)c)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		last = (char *)&s[i];
	return (last);
}
