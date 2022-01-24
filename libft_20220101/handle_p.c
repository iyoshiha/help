/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:40 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 12:51:56 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <print_hex_base.h>
#include <ft_printf.h>

int	handle_p(t_format_data	*data)
{
	void	*ptr;
	int		printed_num;

	ptr = va_arg(data->ap, void *);
	printed_num = print_address(ptr);
	return (printed_num);
}
