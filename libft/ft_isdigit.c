/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:56:12 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/09/22 16:50:50 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	return (1);
}
/* int	main()
{
	int c='Z';
	int i=ft_isdigit(c);
	int e=isdigit(c);
	printf("FT = %d\n",i);
	printf("original = %d\n",e);
} */
