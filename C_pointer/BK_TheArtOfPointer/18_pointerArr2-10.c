#include<stdio.h>
#include<conio.h>

int main()
{
	int k[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	
	printf("k[1][2] = %d  &k[1][2] = %p\n\n",k[1][2],&k[1][2]);
	
	printf("*(*(k+1)+2) = %d  *(k+1)+2 = %p\n\n",*(*(k+1)+2),*(k+1)+2);
	/* *(k+1) == k+1 == k[1]
		k[1]+2 == &k[1][0+2] == &k[1][2]*/
		
	printf("*(k[1]+2) = %d  k[1]+2 = %p",*(k[1]+2),k[1]+2);
	/* k[1]+2 ==&k[1][2]*/

	getch();
	return 0;
}
