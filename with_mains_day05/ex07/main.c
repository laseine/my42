#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[9]  = "ecole 42\0";
	char s2[11] = "ecole 1337\0";

	printf("s1 = \"%s\" \ns2 = \"%s\" \n", s1 , s2);
	printf("ft_strncmp(s1, s2, 2) : %d \n", ft_strncmp(s1, s2, 2));
	printf("ft_strncmp(s1, s2, 9) : %d \n", ft_strncmp(s1, s2, 9));
	printf("ft_strncmp(s1, s2, 12) : %d \n", ft_strncmp(s1, s2, 12));
	printf("ft_strncmp(s1, s2, 0) : %d \n", ft_strncmp(s1, s2, 0));
	printf("ft_strncmp(s2, s1, 9) : %d \n", ft_strncmp(s2, s1, 9));
	
	return (0);
}