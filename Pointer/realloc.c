#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *str;

   /* ������ڴ���� */
   str = (char *) malloc(15);
   strcpy(str, "Hello");
   printf("String = %s  Address = %p\n", str, str);

   /* ���·����ڴ� */
   str = (char *) realloc(str, 25);
   strcat(str, " World");
   printf("String = %s  Address = %p\n", str, str);

   free(str);

	getchar();
   return(0);
}
