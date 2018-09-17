#include <unistd.h>

const 	char *hexabase = "0123456789abcdef\0";
void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_putnbr_base_x(int n, const char *base);

int		main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas\t bien ?");
	ft_putchar('\n');
	ft_putchar('#');
	ft_putnbr_base_x(10, hexabase);
	ft_putchar('#');
	ft_putchar('\n');
    return (0);
}
