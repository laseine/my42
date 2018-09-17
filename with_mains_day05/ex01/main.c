#include <unistd.h>

void	ft_putnbr(int nb);

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}


int 	main()
{	
	int m;

	m=0;				ft_putnbr(m); ft_putchar('\n');
	m=1;				ft_putnbr(m); ft_putchar('\n');
	m=-1;				ft_putnbr(m); ft_putchar('\n');
	m=1077177846;		ft_putnbr(m); ft_putchar('\n');
	m=-1188476936;		ft_putnbr(m); ft_putchar('\n');
	m=1687314938;		ft_putnbr(m); ft_putchar('\n');
	m=-2147483648;		ft_putnbr(m); ft_putchar('\n');
	m=-2147483648+1;	ft_putnbr(m); ft_putchar('\n');
	m--;				ft_putnbr(m); ft_putchar('\n');
	m=2147483647;		ft_putnbr(m); ft_putchar('\n');
	m=-m;				ft_putnbr(m); ft_putchar('\n');
	m--;				ft_putnbr(m); ft_putchar('\n');
}
