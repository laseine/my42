#include <unistd.h>

void ft_is_negative(int n);

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}


int 	main()
{	
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
}
