/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:47:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 16:15:27 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** SINOPSE: memchar - locate byte in byte string
**
** DESCRIÇÃO:
**       procura a primeira ocorrência do caractere c (um char sem sinal) 
**  nos primeiros n bytes da string apontada pelo argumento str .
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stddef.h>
#include <string.h>
int main (void) 
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch[] = '.';
 
 
   size_t n = 29;
   printf("String com ft_memchr() |%p|",ft_memchr(str,ch,n));
   printf("String com memchr() |%p|",memchr(str,ch,n));
   
   

   return(0);
}
*/
