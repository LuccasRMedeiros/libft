/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/29 20:02:47 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t	total_size(long int ln, int p, char sig, size_t ln_sz)
{
	size_t		t_sz;

	t_sz = 0;
	if (p < 0 || p < (int)ln_sz)
		p = 0;
	else
		p -= ln_sz;
	if (!ln && !p)
		return (t_sz);
	if (ln < 0 || (sig == '+' || sig == ' '))
		++t_sz;
	t_sz += p + ln_sz;
	return (t_sz);
}

static void	set_sign(long int ln, char sig, char **ltoa)
{
	char	*p_ltoa;

	p_ltoa = *ltoa;
	if (ln < 0)
		p_ltoa[0] = '-';
	else if (sig == '+' || sig == ' ')
		p_ltoa[0] = sig;
}

static long long int	set_lln(long int ln)
{
	long long int	lln;

	lln = ln;
	if (lln < 0)
		lln *= -1;
	return (lln);
}

char	*ft_ltoa(long int ln, int p, char sig)
{
	long long int	lln;
	size_t			ln_sz;
	size_t			t_sz;
	char			*ltoa;

	lln = set_lln(ln);
	ln_sz = ft_intlen(ln);
	t_sz = total_size(ln, p, sig, ln_sz);
	ltoa = ft_calloc(t_sz + 1, sizeof *ltoa);
	if (!ltoa)
		return (NULL);
	while (ln_sz)
	{
		ltoa[--t_sz] = (lln % 10) + 48;
		lln /= 10;
		--ln_sz;
	}
	while (ltoa)
		ltoa[--t_sz] = '0';
	set_sign(ln, sig, &ltoa);
	return (ltoa);
}
