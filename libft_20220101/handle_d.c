/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:31 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 12:51:39 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <print_hex_base.h>
#include <ft_printf.h>

int	handle_d(t_format_data	*data)
{
	int		decimal;
	int		printed_num;

	decimal = va_arg(data->ap, int);
	printed_num = print_decimal_base(decimal, STDOUT_FILENO);
	return (printed_num);
}
