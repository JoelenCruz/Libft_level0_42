/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:30:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 15:30:06 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SINOPSE: localizar caractere na string (Ultima ocorrencia!)
**
** DESCRIÇÃO:
** A função strrchr() localiza a ÚLTIMA ocorrência de c (convertida em
** char) na string apontada por s. O caractere nulo final é
** considerado como parte da string; portanto, se c é `\0', a função
** ções localizam a terminação `\0'.
*/
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}


// C code to demonstrate the working of
// strrchr()

#include <stdio.h>
#include <string.h>

// Driver function
int main(int argc, char **argv)
{
    (void)argc;
    // initializing variables
    char* val;

    // Use of strrchr()
    val = strrchr(argv[2], argv[1][0]);

    printf("(strrchr) String after last  %c is : %s \n", argv[1][0], val);
    
    val = ft_strrchr(argv[2], argv[1][0]);

    printf("(ft_strrchr) String after last %c is : %s \n", argv[1][0], val);

    // Use of strrchr()
    // returns null
    // test for null
   
    return (0);
}
