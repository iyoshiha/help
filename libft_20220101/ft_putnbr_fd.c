/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 00:02:31 by iyoshiha          #+#    #+#             */
/*   Updated: 2020/10/31 00:47:55 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	output_num(unsigned int unb, int fd)
{
	if (unb / 10 == 0)
	{
		ft_putchar_fd('0' + unb, fd);
		return ;
	}
	output_num(unb / 10, fd);
	ft_putchar_fd('0' + unb % 10, fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int unb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		unb = -1 * n;
	}
	else
	{
		unb = n;
	}
	output_num(unb, fd);
}
