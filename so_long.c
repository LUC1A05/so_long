/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:59:33 by marvin            #+#    #+#             */
/*   Updated: 2024/03/04 15:59:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_ber(char *map_name)
{
    int len;

    len = ft_strlen(map_name)-4;
    if (ft_strcmp(&map_name[len], ".ber"))
        return (1);
    return (0);
}

int main(fd)