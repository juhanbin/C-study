#include<stdio.h>

int main()
{
    int A,B=0;
    scanf("%d",&A);
    scanf("%d",&B);
    if(A>B)
        printf(">");
    else if(A<B)
        printf("<");
    else
        printf("==");
    return 0;
}