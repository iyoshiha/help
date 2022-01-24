/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:46 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 12:51:53 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <print_hex_base.h>
#include <ft_printf.h>

int	handle_u(t_format_data	*data)
{
	unsigned int	unsigned_decimal;
	int				printed_num;

	unsigned_decimal = va_arg(data->ap, unsigned);
	printed_num = print_unsigned_decimal(unsigned_decimal, STDOUT_FILENO);
	return (printed_num);
}
