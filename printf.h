#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int		ft_printf(const char *restrict format, ...);
char	*ft_recog(va_list ap, char c);
char	*ft_strings(va_list ap, char ca);
char	*ft_hexadec(va_list ap, char cb);
char	ft_character(va_list ap, char cc);
char	*ft_number(va_list ap, char cd);
char	*ft_octal(va_list ap, char ce);
char	*ft_ptradr(va_list ap, char cg);
void	ft_put32char(wchar_t c);
void	ft_put32str(char *str);
char	*ft_putunsi(va_list ap, char ch);
void	ft_putunbr(unsigned int unbr);

#endif
