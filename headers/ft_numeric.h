/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numeric.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:23:14 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:11:04 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This header groups functions related to numeric data.
** By numeric we want to say that any function here is doing some number       -
** related process (to turn an int to string or vice versa), but not a math    -
** operataion.
*/

#ifndef FT_NUMERIC_H
# define FT_NUMERIC_H

# include "libft.h"
# include "ft_char.h"
# include "ft_memory.h"

# define UPR 55
# define LOW 87

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
char	*ft_ltoa(long int n);
char	*ft_utoa(unsigned int un);
char	*ft_dtox(unsigned int dn, unsigned int font);
char	*ft_ltox(long unsigned int dn, unsigned int font);
size_t	ft_intlen(intmax_t n);
size_t	ft_uintlen(uintmax_t n);
size_t	ft_hexlen(uintmax_t dn);

#endif
