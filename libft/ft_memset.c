/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:10:30 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/09/22 15:46:47 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		cont;
	char		*new;

	new = (char *)b;
	cont = 0;
	while (cont < len)
	{
		new[cont] = (unsigned char)c;
		cont ++;
	}
	return (b);
}
