#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int 	main(void)
{
	char		src[42]   = "abcdefghij\0";
	char		dest1[42] = "0123456789\0";
    char		dest2[42] = "0123456789\0";
    unsigned 	n;
    unsigned 	s1;
    unsigned 	s2;

    n = 13;

    printf("src : \"%s\" \tsize : %d\n", src, n);
	s1 = ft_strlcpy(dest1, src, n);
	printf("ft_strlcpy : \"%s\"\t\treturn : %d\n", dest1, s1);
	s2 = strlcpy(dest2, src, n);
	printf("   strlcpy : \"%s\"\t\treturn : %d\n", dest2, s2);
   
	return(0);
}