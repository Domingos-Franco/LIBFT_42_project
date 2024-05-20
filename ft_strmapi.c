/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <dgermano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:26:58 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/20 13:43:18 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *apllied;

    i = 0;
    apllied = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
        if (!apllied)
            return (NULL);
    while (s[i])
    {
        apllied[i] = f(i,s[i]);
        i++;
    }
    apllied[i] = '\0';
    return (apllied);
}