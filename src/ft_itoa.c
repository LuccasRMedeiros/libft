/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/30 10:43:41 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t	total_size(int n, int p, char sig, size_t n_sz)
{
	size_t		t_sz;

	t_sz = 0;
	if (p < 0 || p < (int)n_sz)
		p = 0;
	else
		p -= n_sz;
	if (!n && !p)
		return (t_sz);
	if (n < 0 || (sig == '+' || sig == ' '))
		++t_sz;
	t_sz += p + n_sz;
	return (t_sz);
}

static void	set_sign(int n, char sig, char **itoa)
{
	char	*p_itoa;

	p_itoa = *itoa;
	if (n < 0)
		p_itoa[0] = '-';
	else if (sig == '+' || sig == ' ')
		p_itoa[0] = sig;
}

static long int	set_ln(int n)
{
	long int	ln;

	ln = n;
	if (ln < 0)
		ln *= -1;
	return (ln);
}

char	*ft_itoa(int n, int p, char sig)
{
	long int	ln;
	size_t		n_sz;
	size_t		t_sz;
	char		*itoa;

	ln = set_ln(n);
	n_sz = ft_intlen(n);
	t_sz = total_size(n, p, sig, n_sz);
	itoa = ft_calloc(t_sz + 1, sizeof *itoa);
	if (!itoa)
		return (NULL);
	while (n_sz && t_sz)
	{
		itoa[--t_sz] = (ln % 10) + 48;
		ln /= 10;
		--n_sz;
	}
	while (t_sz)
		itoa[--t_sz] = '0';
	set_sign(n, sig, &itoa);
	return (itoa);
}
