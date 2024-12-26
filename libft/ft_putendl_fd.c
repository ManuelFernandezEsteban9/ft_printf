/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:49:02 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/10 22:20:48 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	c = '\n';
	if (fd)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd(c, fd);
	}
}
/*
int     main(void)
{
         char    *s = "Hola Mundo!";
         int     fd;
         
         fd = open("prueba.txt", O_CREAT|O_WRONLY,0644);
         ft_putendl_fd(s, fd);
         close(fd);
         return (0);
}*/
