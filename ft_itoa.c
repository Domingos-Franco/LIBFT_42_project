/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <dgermano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:21:32 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/20 13:44:38 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_abs(int n)
{
    if (n < 0)
        n *= -1;
    return (n);
}
static int  ft_is_negative(int n) {
    return (n < 0);
}

char    *ft_itoa(int n)
{
    int i;
    int count;
    int is_negative;

    i = 0;
    count = n;
    is_negative = ft_is_negative(n);
    while (count != 0)
    {
        count /= 10;
        i++;
    }
    char *s = (char *)malloc(sizeof(char) * (i + 1));
    if (!s)
        return (NULL);
    if (is_negative)
    {
        i++;
        s[0] = '-';
        s[i] = '\0';
        i--;
        while (i > 0)
        {
            s[i] = ft_abs(n) % 10 + 48; 
            n /= 10;
            i--;
        }
        return (s);
    }
    s[i] = '\0';
    i--;
    while (i >= 0)
    {
        s[i] = n % 10 + '0'; 
        n /= 10;
        i--;
    }
    return (s);
}
