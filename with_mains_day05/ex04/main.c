#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main () {
   char src1[255];
   char src2[255];
   char dest1[20];
   char dest2[20];

   strcpy(src1, "01234567890");
   strcpy(src2, "01234567890");
  
   memset(dest1, '\0', sizeof(dest1));
   memset(dest2, '\0', sizeof(dest2));
   
   strncpy(dest1, src1, 20);
   ft_strncpy(dest2, src2, 20);

   printf("Result1 : \"%s\"\\\n", dest1);
   printf("Result2 : \"%s\"\\\n", dest2);

   return(0);
}
