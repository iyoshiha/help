/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:39:14 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 13:59:48 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# define ERROR -1
# define LEN_OF_NULL 6

typedef struct s_format_data
{
	const char	*format;
	int			printed_len;
	int			format_i;
	va_list		ap;
}				t_format_data;

int		ft_printf(const char	*format, ...);
void	output_and_count(t_format_data	*data);
int		convert_and_count(t_format_data	*data);

#endif
