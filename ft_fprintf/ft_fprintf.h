/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:09:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/10/28 12:00:07 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is a sub header of libft.h, it lists almost everything that is needed  -
** to make ft_printf work properly.
** Here are listed functions that are exclusive for ft_printf                  -
** (ft_printf_parser for exemple), and definitions that are needed only by     -
** ft_printf.
** P_CONVS more than tells what are the format specifiers, carries positions of-
**  the specifiers according the ones who uses functions without any kind of   -
** treatment needed before printing. The positions are inverse to status (see  -
** ft_printf) to avoid an undesirable conversion inside the global variable.
** P_FLAGS are used to formating the format specifiers. Consider each symbols  -
** as masks.
*/

#ifndef FT_FPRINTF_H
# define FT_FPRINTF_H

# include "../libft.h"

# define P_FLAGS "0-"
# define P_SIZES "123456789*"
# define P_SPECS "cspdiuxX%"
# define S_NUM "diuxX"
# define S_ALP "csp%"
# define LOW 87
# define UPR 55

typedef struct s_fspec
{
	int		init;
	char	fs;
	size_t	w;
	int		p;
	size_t	l;
	char	s;
	char	*dt;
	char	sig;
	size_t	sz;
}				t_fspec;

int		ft_fprintf(int fd, const char *str, ...);
char	*pf_txtparser(t_fspec *tp, va_list args);
char	*pf_numparser(t_fspec *tp, va_list args);
void	pf_refine_weights(t_fspec *tp, va_list args);
void	pf_refine_long_weights(t_fspec *tp, va_list args);
char	*pf_textformat(t_fspec *tp);
t_fspec	*pf_newfspec(void);
void	pf_delfspec(t_fspec **del);
t_fspec	*pf_settype(const char *str, va_list args);

#endif
