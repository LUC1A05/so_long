/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:01:17 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/10/18 17:31:38 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtrim_start(char const *s1, char const *set)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)s1;
	while (s2[i] && ft_strchr(set, s2[i]) != NULL)
	{
		i++;
	}
	return (i);
}

int	ft_strtrim_end(char const *s1, char const *set)
{
	int		i;
	char	*s2;

	s2 = (char *)s1;
	i = ft_strlen(s1) - 1;
	while (s2[i] && ft_strchr(set, s2[i]) != NULL)
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == 0)
		return (ft_strdup(""));
	s2 = (char *)s1;
	start = ft_strtrim_start(s1, set);
	end = ft_strtrim_end(s1, set);
	s2 = ft_substr(s1, start, (end - start + 1));
	return (s2);
}
