/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <dgermano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:58:29 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/18 18:24:12 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_to_remove(const char *trash, char s)
{
	int	i;

	i = 0;
	while (trash[i] != '\0')
	{
		if (s == trash[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s_return;
	int		i;
	int		init;
	int		exit;

	i = 0;
	init = 0;
	exit = 0;
	while (is_to_remove(set, s1[i++]) == 1)
		init++;
	while (is_to_remove(set, s1[i]) == 0)
		i++;
	while (is_to_remove(set, s1[i++]) == 1)
		exit++;
	s_return = (char *)malloc(sizeof(char) * (ft_strlen(s1) - (init + exit)));
	s_return = ft_substr(s1, init, ft_strlen(s1) - (init + exit));
	return (s_return);
}