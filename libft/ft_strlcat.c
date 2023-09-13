/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:53:20 by laiherna          #+#    #+#             */
/*   Updated: 2023/09/13 15:22:34 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include "libft.h"

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dest_end;
	unsigned int	i;
	unsigned int	j;

	dest_end = dest;
	i = 0;
	while (dest_end[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j <= size)
	{
		dest_end[i] = src[j];
		i++;
		j++;
	}
	dest_end[i] = '\0';
	return (dest);
}

/* int main()
{
	char src[8] = " que tal";
	char dest[4] = "hola";
	unsigned int size = 4;

	ft_strlcat (dest, src, size);
	printf("%s", dest);
	return (0);
} */
