/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:11:58 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 15:50:59 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A' ));
	return (c);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	s = 69;  

	printf("Res: %c", ft_tolower(s));

}
*/
