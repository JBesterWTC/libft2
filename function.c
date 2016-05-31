/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 09:45:47 by jbester           #+#    #+#             */
/*   Updated: 2016/05/30 16:01:13 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_put32char(wchar_t c)
{
	write(1, &c, 1);
}

void	ft_put32str(char *str)
{
	while (*str != '\0')
	{
		ft_put32char(*str);
		str++;
	}
}

void	ft_putunbr(unsigned int unbr)
{
	if (unbr < 0)
	{
		ft_putchar('-');
		unbr = -unbr;
	}
	if (unbr >= 10)
	{
		ft_putunbr(unbr / 10);
		ft_putunbr(unbr % 10);
	}
	else
		ft_putchar(unbr + '0');
}
