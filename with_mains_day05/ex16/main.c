#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int 	main(void)
{
	char strsrc[3] = "ef\0";
	char strdest[9] = "abcd\0";
	printf("\ndest = \"%s\" src = \"%s\"\n", strsrc, strdest);
	printf("Après ft_strcat : dest = \"%s\"\n", ft_strcat(strdest, strsrc));
	char strsrc2[7] = "efghij\0";
	char strdest2[13] = "abcd\0";
	printf("\ndest = \"%s\" src = \"%s\"\n", strsrc2, strdest2);
	printf("Après ft_strcat : dest = \"%s\"\n", ft_strcat(strdest2, strsrc2));
	char strsrc3[4] = "123\0";
	char strdest3[1] = "\0";
	printf("\ndest = \"%s\" src = \"%s\"\n", strsrc3, strdest3);
	printf("Après ft_strcat : dest = \"%s\"\n", ft_strcat(strdest3, strsrc3));
	char strsrc4[1] = "\0";
	char strdest4[4] = "ABC\0";
	printf("\ndest = \"%s\" src = \"%s\"\n", strsrc4, strdest4);
	printf("Après ft_strcat : dest = \"%s\"\n", ft_strcat(strdest4, strsrc4));
}
