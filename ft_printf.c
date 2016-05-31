#include "printf.h"

int	ft_printf(const char *restrict format, ...)
{
	va_list	ap;

	va_start(ap,format);
	while (*format)
	{
		while (*format != '%' && *format)
		{
			ft_putchar(*format);
			format++;
		}
		format++;
		ft_recog(ap, *format);
		format++;
	}
	va_end(ap);
}
