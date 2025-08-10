/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzukikaisei <suzukikaisei@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:33:44 by suzukikaise       #+#    #+#             */
/*   Updated: 2025/08/10 17:01:27 by suzukikaise      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"

int ft_toupper(int c)
{
    if (ft_islower(c))
        return (c & 0x5f);
    return (c);
}
