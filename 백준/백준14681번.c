#include<stdio.h>

int main()
{
    int A,B=0;
    scanf("%d",&A);
    scanf("%d",&B);

    if(A>0&&B>0)
    printf("1");
    else if(A<0&&B>0)
    printf("2");
    else if(A<0&&B<0)
    printf("3");
    else if(A>0&&B<0)
    printf("4");
}