#include<stdio.h>
int swap(int *p,int *q);
int main()
{  
   int  x=3,y=5,*p=&x,*q=&y;
   swap(p,q);             //��ַ����*p 
   printf("%d\t%d\n",*p,*q); 
} 
int swap(int *p,int *q)
{  
   int t;                   //ע�⣡����*t�� 
   t=*p;   
   *p=*q;  
   *q=t;
}
