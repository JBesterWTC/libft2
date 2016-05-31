/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 09:41:42 by jbester           #+#    #+#             */
/*   Updated: 2016/05/30 15:30:14 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_number(va_list ap, char cd)
{
	int	i;

	i = va_arg(ap, int);
	ft_putnbr(i);
	return (0);
}

char	*ft_octal(va_list ap, char ce)
{
	unsigned int	alph;
	char	*str1;

	alph = va_arg(ap, unsigned int);
	str1 = ft_convert(alph, 8);
	ft_putstr(str1);
	return (0);
}

char	*ft_ptradr(va_list ap, char cg)
{
	void			*addr;
	char			*str7;
	unsigned int	storit;

	storit = (unsigned int)addr;
	addr = va_arg(ap, void *);
	ft_putstr("0x7fff");
	str7 = ft_convert(storit, 16);
	ft_putstr(str7);
	return (0);
}

char	*ft_putunsi(va_list ap, char ch)
{
	unsigned int	unb;

	unb = va_arg(ap, unsigned int);
	if (ch == 'd')
		ft_putunbr(unb);
	else if (ch == 'D')
		ft_putunbr(unb);
	return (0);		
}
