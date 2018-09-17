#include <unistd.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb);

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	main()
{
	int n;
	int result;

	n = 0;
	while (n < 13)
	{
		result = ft_recursive_factorial(n);
		printf("- %i! = %i\n", n, result);
		n++;
	}
}
