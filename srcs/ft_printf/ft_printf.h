/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:43:44 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 12:10:26 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>

# define HEX_UP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"
# define DEC "0123456789"
# define SPECIFIERS "cspdiuxX%%"
# define FLAGS "-0# +"
# define SPECIAL ".*"

typedef struct s_struct
{
	int		dash;
	int		zero;
	int		space;
	int		plus;
	int		star;
	size_t	width;
	int		dot;
	int		precision;
	va_list	ap;
	char	*string;
	int		len;
	int		percent;
	char	specifier;
	int		is_nul;
	int		is_pos;
	int		is_neg;
	int		hex_low;
	int		hex_up;
	int		is_str;
	int		hash;
}			t_struct;
/* FUNCTIONS */
int			ft_printf(const char *s, ...);
int			ft_dprintf(const char *s, ...);
int			get_spec(t_struct *vars);
void		parse_flags(const char **s, t_struct *vars);
int			pad(t_struct *vars, int fd);
int			handle_string(char *s, t_struct *vars);
int			handle_ptr(size_t ptr, t_struct *vars);
int			handle_int(int n, t_struct *vars);
int			handle_unsigned(unsigned int n, t_struct *vars, char *base);
void		printf_init(t_struct *vars);
void		setflag(char c, t_struct *vars);

#endif