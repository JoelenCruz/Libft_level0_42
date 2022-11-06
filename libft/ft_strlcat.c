/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:47:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/06 17:10:32 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// SINOPSE: concatenação de strings limitadas por tamanho
// DESCRIÇÃO:
// As funções strlcpy() e strlcat() copiam e concatenam strings
// respectivamente. Eles são projetados para serem mais seguros, 
// mais consistentes e menos
// substituições propensas a erros para strncpy(3) e strncat(3). 
// Ao contrário daqueles
// funções, strlcpy() e strlcat() pegam o tamanho total do buffer (não
// apenas o comprimento) e garantimos que o resultado 
// finalize com NUL (desde que
// size é maior que 0 ou, no caso de strlcat(), desde que haja
// pelo menos um byte livre em dst). Observe que você deve incluir um byte para
// o NUL em tamanho. Observe também que strlcpy() e strlcat() operam apenas em
// verdadeiras strings ``C''. 
// Isso significa que para strlcpy() src deve ser NUL-termi-
// nated e para strlcat() ambos src e dst devem ser terminados em NUL.
// A função strlcat() anexa a string src terminada em NUL ao final
// de dst. Ele anexará no máximo tamanho - strlen(dst) - 1 bytes, 
// NUL-terminando o resultado.

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	k;
	size_t	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (size < len_dest)
		len_src += size;
	else
		len_src += len_dest;
	k = 0;
	while (src[k] != '\0' && (len_dest + k) < size - 1)
	{
		dest[len_dest + k] = src[k];
		k++;
	}
	dest[len_dest + k] = '\0';
	return (len_src);
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

   printf("%d\n", ft_strlcat(dest, src, 15));
   
   return(0);
}
*/