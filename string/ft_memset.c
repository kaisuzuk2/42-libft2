/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzukikaisei <suzukikaisei@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:33:35 by suzukikaise       #+#    #+#             */
/*   Updated: 2025/08/10 18:59:14 by suzukikaise      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char uc;
    unsigned char *ub;

    if (len == 0) 
        return (b);
    uc = (unsigned char)c;
    ub = (unsigned char *)b;
    ub[0] = uc;
    ub[len - 1] = uc;
    if (len <= 2)
        return (b);
    ub[1] = uc;
    ub[2] = uc;
    ub[len - 2] = uc;
    ub[len - 3] = uc;
    if (len <= 6)
        return (b);
    ub[3] = uc;
    ub[len - 4] = uc;
    if (len <= 8)
        return (b);
}