/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:03:19 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/10/18 17:23:04 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_figures(int n)
{
	int	figures;

	if (n == 0)
		return (1);
	figures = 0;
	if (n < 0)
		figures++;
	while (n != 0)
	{
		n /= 10;
		figures++;
	}
	return (figures);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count_figures(n) - 1;
	str = (char *)malloc(sizeof(char) * (count_figures(n) + 1));
	if (!str)
		return (NULL);
	str[count_figures(n)] = 0;
	if (n < 0)
	{
		n = n * (-1);
		str[0] = '-';
	}
	while (n > 9)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (n < 10)
		str[i] = n + '0';
	return (str);
}
