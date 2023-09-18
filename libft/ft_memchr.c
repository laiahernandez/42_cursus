/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:40:00 by laiherna          #+#    #+#             */
/*   Updated: 2023/09/18 12:02:03 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_memchr(char *str, char ch, int length)
{
    int     i;
    int     j;
    char    *new_str;

    i = 0;
    j = 0;
    while (str != '\0')
    {
        if (str[i] == ch)
        {
            while (i <= length)
            {
                new_str[j] = str[i];
                i++;
                j++;
            }
            return (new_str);
        }
        else
            i++;
    }
}
