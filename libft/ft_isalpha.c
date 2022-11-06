/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:47:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 14:09:53 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** SINOPSE: teste de caracteres alfabeticos
**
** DESCRIÇÃO:
** 		A função isalpha teste se os caracteres são letas.
*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main()
{
	char c = 'j' ;
	int b = 12345 ;
	printf("%d",ft_isalpha(b));
}
*/
