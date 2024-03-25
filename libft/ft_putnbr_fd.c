/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:37:35 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/10/04 17:11:13 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	nbr;

	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = n * -1;
	}
	else
	{
		nbr = n;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	c = nbr % 10 + '0';
	write(fd, &c, 1);
}
