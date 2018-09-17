#include <stdio.h>
#include <string.h>

void	ft_putchar(char c);

void ft_putnbr_base(int nbr, char *base);

int 	main(void)
{
	char		base1[9]   = "01234567\0";
	char		base2[11] = "0123456789\0";
	char		base3[5] = "edno\0";

    int	n1;
    int	n2;
    int	n3;

    n1 = 34;
    n2 = 1337;
    n3 = 119;

	ft_putnbr_base(n1, base1);
	ft_putchar('\n');
    ft_putnbr_base(n2, base2);
    ft_putchar('\n');
    ft_putnbr_base(n3, base3);
    ft_putchar('\n');

	return(0);
}