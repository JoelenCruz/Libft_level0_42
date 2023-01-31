/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:11:58 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 15:49:18 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SINOPSE: conversão de letras minúsculas para maiúsculas
**
** DESCRIÇÃO:
** A função toupper() converte uma letra minúscula para a correspondente
**	Letra maiúscula.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A' ));
	return (c);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	s = 101102;  

	printf("Res: %c", ft_toupper(s));

}
*/

