#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int 	main(void)
{
	char src[64]   = "abc\0";
    char dest0[64] = "0123456789\0";
	char dest1[64] = "0123456789\0";
    char dest2[64] = "0123456789\0";
    unsigned n;
    unsigned s1;
    unsigned s2;

    n = 13;

    printf("src : \"%s\" \t dest : \"%s\"\t\tsize : %d\n", src, dest0, n);
	s1 = ft_strlcat(dest1, src, n);
	printf("ft_strlcat : \"%s\" \t\t\treturn %d\n", dest1, s1);
	s2 = strlcat(dest2, src, n);
    printf("   strlcat : \"%s\" \t\t\treturn %d\n", dest2, s2);
   
	return(0);
}