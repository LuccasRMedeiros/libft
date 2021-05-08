/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:38:26 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/08 17:16:49 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This header groups functions related to char process, such as turning one   -
** alpha char from lowercase to uppercase and vice versa or verify if a char is-
**	numeric, etc.
** It is needed by both ft_string and ft_numeric
*/

#ifndef FT_CHAR_H
# define FT_CHAR_H

# include "libft.h"

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
