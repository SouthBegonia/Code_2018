/*��dev C���޷�ʵ��,������.VC++6.0����
��:123abc�L
   xyz�L
   
a = 123, c = x*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    char c;

    scanf("%d", &a);
    fflush(stdin);
    
    c = getchar();
    printf("a = %d, c = %c \n", a, c);
    
    getchar();
    return 0;
}
