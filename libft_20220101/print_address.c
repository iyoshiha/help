/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha </var/mail/iyoshiha>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:22:51 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 14:22:54 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <print_hex_base.h>

int	print_address(void	*ptr)
{
	int	total_num_printed;

	ft_putstr_fd("0x", STDOUT_FILENO);
	total_num_printed = PHEX_LEN_OF_0X;
	if (ptr == 0)
		return (total_num_printed += print0());
	total_num_printed += \
		print_hex_base((long long unsigned int)ptr, PHEX_LOWERCASE);
	return (total_num_printed);
}

/*
	return: the total number of printed characters.
	printout pointer type value assigned as argument.
*/
