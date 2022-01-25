/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:01:04 by iyoshiha          #+#    #+#             */
/*   Updated: 2022/01/15 08:31:36 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const	char *format, ...)
{
	t_format_data	entity;
	t_format_data	*data;

	data = &entity;
	data->format = format;
	data->printed_len = 0;
	va_start(data->ap, format);
	output_and_count(data);
	va_end(data->ap);
	return (data->printed_len);
}
