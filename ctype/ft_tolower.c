/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzukikaisei <suzukikaisei@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:01:44 by suzukikaise       #+#    #+#             */
/*   Updated: 2025/08/10 17:05:20 by suzukikaise      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"

int ft_tolower(int c)
{
    if (ft_isupper(c))
        return ((unsigned)c | 32);
    return (c);
}