#include<stdio.h>
#define N 4                            //4�� 
int main()
{
	/*      *                 i=1
	       ***                i=2
	      *****               i=3
	     *******              i=4
	      *****               i=3
	       ***                i=2
	        *                 i=1
	*/
	int i,j;
	
	//�ϰ벿�� 
	for(i=1;i<=N;i++)      
	{
	   for(j=1;j<=N-i;j++)
		  printf(" ");
	   for(j=1;j<=2*i-1;j++)           //�ؼ� 
	      printf("*");
	    printf("\n");
	}                                                     
	
	
	//�°벿�� 
	for(i=N-1;i>=1;i--)               //�ؼ�                  
	{                       
		for(j=1;j<=N-i;j++)           //�ⲿ�ֲ��� 
		   printf(" ");
		for(j=1;j<=2*i-1;j++)
		   printf("*");
		printf("\n");
	}
 } 
