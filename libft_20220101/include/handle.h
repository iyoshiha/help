/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:01:48 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 12:38:09 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_H
# define HANDLE_H

# include <libft.h>

int	handle_pct(t_format_data	*data);
int	handle_c(t_format_data	*data);
int	handle_d(t_format_data	*data);
int	handle_i(t_format_data	*data);
int	handle_large_x(t_format_data	*data);
int	handle_lower_x(t_format_data	*data);
int	handle_p(t_format_data	*data);
int	handle_s(t_format_data	*data);
int	handle_u(t_format_data	*data);

#endif
