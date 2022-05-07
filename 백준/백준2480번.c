#include<stdio.h>

int main()
{
    int A,B,C=0;
    scanf("%d %d %d",&A,&B,&C);
    int MAX=0;
    MAX=A>B?A:B;
    MAX=MAX>C?MAX:C;
    if(A==B&&A==C&B==C)
    {
        printf("%d",10000+A*1000);
    }
    else if(A==B||A==C)
    {
        printf("%d",1000+A*100);
    }
    else if(B==C)
    {
        printf("%d",1000+B*100);
    }
    else
    {
        printf("%d",MAX*100);
    }
    return 0;
}