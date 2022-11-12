/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:47:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/08 10:00:23 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	c;
	size_t	d;

	if (size == 0)
		return (ft_strlen(src));
	if (!dest && !src)
		return (0);
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[50];
   size_t size = 50;

   strcpy(src,  "Joelen");
   
   strcpy(dest, "Cruz");

   ft_strlcat(dest, src, size);
   printf("Final destination string : |%s|\n", dest);
   
   strlcat(dest, src, size);
   printf("Final destination string funcao original : |%s|\n", dest);

   printf("%zu\n", ft_strlcat(dest, src, 17));
   printf("%zu\n", strlcat(dest, src, 7));
   
   return(0);
}
*/
