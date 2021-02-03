/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno </var/mail/lrocigno>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:44:45 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/03 18:58:41 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(char *s, char c, int n)
{
	int b;

	b = 0;
	while (s[b] != '\0' && b < n)
	{
		s[b] = c;
		b++;
	}
}
