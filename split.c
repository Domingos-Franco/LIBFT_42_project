/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <dgermano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 10:13:02 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/20 16:53:23 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//#include "libft.h"


char    **get_mat(const char *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[start + i] != '\0' && i < (int)len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int count_words(const char *s, char c)
{
    int words;
    int i;

    words = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            words++;
        i++;
    }
    return (words);
}

char **ft_split(const char *s, char c)
{
    return (get_mat(s, c));
}
char **get_mat(const char *s, char c)
{
    char    **mat;
    char    *word;
    int words;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    words = count_words(s, c);
    mat = (char **)malloc((words + 1) * sizeof(char *)); 
    if (!mat)
        return (NULL);
    while (s[i])
    {
        if (s[i] == c)
        {   
            word = ft_substr(s, j, i - j);
            if (!word)
                return (NULL);
            mat[k++] = word;
            j = i + 1;
        }
        i++;
    }
    printf("%d\n", words);
    mat[k] = ft_substr(s, j, i - j);
    return (mat);
}

int main(void)
{
    int i = 0;
    char **words = ft_split("testando uma coisa   ", ' ');

    while (words[i])
        {
            printf("%s\n", words[i]);
            i++;
        }
    return (0);
}