#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int 	main()
{	
	ft_print_reverse_alphabet();
}
