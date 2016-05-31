/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 09:34:57 by jbester           #+#    #+#             */
/*   Updated: 2016/05/30 15:27:38 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	ft_character(va_list ap, char cc)
{
	char	alph;

	alph = va_arg(ap, int);
	if (cc == 'c')
		ft_putchar(alph);
	else if (cc == 'C')
			ft_put32char(alph);
	return (0);
}

char	*ft_strings(va_list ap, char ca)
{
	char	*str1;

	str1 = va_arg(ap, char *);
	if (ca == 's')
		ft_putstr(str1);
	else if (ca == 'S')
		ft_put32str(str1);
	return (0);
}

char	*ft_hexadec(va_list ap, char cb)
{
	char			*str2;
	unsigned int	carry;

	carry = va_arg(ap, unsigned int);
	if (cb == 'x')
		str2 = ft_convert(carry, 16);
	else if (cb == 'X')
		str2 = ft_upper_convert(carry, 16);
	ft_putstr(str2);
	return (0);
}

char	*ft_recog(va_list ap, char c)
{
	int	i;

	if (c == 's' || c == 'S')
		ft_strings(ap, c);
	else if (c == 'x' || c == 'X')
		ft_hexadec(ap, c);
	else if (c == 'c' || c == 'C')
		ft_character(ap, c);
	else if (c == 'i')
		ft_number(ap, c);
	else if (c == 'd' || c == 'D')
		ft_putunsi(ap, c);
	else if (c == 'o' || c == 'O')
		ft_octal(ap, c);
	else if (c == 'u' || c == 'U')
		ft_number(ap, c);
	else if (c == 'p')
		ft_ptradr(ap, c);
	return (0);
}
