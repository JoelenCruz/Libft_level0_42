/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:40:28 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 15:23:01 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SINOPSE: encontre o comprimento da string
**
** DESCRIÇÃO:
** 	A função strlen() calcula o comprimento da string s.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main()
{
	char	*nome;

	nome = "Marajo";
	printf("%d", ft_strlen(nome));
}
*/