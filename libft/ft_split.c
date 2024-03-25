/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:02:24 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/10/19 16:19:24 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	coun;

	i = 0;
	coun = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i])
		{
			coun++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
		else
		{
			while (s[i] == c)
				i++;
		}
	}
	return (coun);
}

static int	ft_fill(char const *s, char c, char **matrix)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < count_words(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i + k] != c && s[i + k])
			k++;
		matrix[j] = ft_substr(s, i, k);
		if (!matrix[j])
			return (ft_free(matrix), 0);
		j++;
		i = i + k;
		k = 0;
	}
	matrix[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;

	matrix = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	if (ft_fill(s, c, matrix) == 0)
		return (NULL);
	return (matrix);
}
/* int	main()
{
	char const	*s;
	char		c;
	int i = -1;
	char **matrix;

	s = "   hola q tal";
	c = ' ';
	matrix = ft_split(s, c);
	while (++i <= count_words(s, c))
		printf("Matrix[%i]: %s\n", i, matrix[i]);
	return(1);
} */
