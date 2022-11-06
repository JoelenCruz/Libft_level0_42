/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:33:58 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 14:51:19 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** BIBLIOTECA: N/A
** SINOPSE: string de saída para determinado arquivo com nova linha
**
** DESCRIÇÃO:
** Emite a string 's' para o descritor de arquivo fornecido, seguido por um
** nova linha.
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
