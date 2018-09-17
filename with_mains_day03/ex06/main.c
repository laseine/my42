#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{

	char i[] = "0123456789";
	char *mystr = i;

	printf("\nlen(%s) = %d$", mystr, ft_strlen(mystr));
    return (0);
}
