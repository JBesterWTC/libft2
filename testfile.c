#include "printf.h"
#include <stdio.h>
int	main()
{
	char	alpha = 'H';
	char	*str = "This is a string";
	int		nbr = 678;
	char	*p;
	
	ft_putstr("Test starts:\n\n");
	ft_printf("Test d: %d\nTest p: %p\n", nbr, &p);
	printf("%p\n", &p);
	return (0);
}
