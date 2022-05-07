#include<stdio.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    if(a/10==10||a/10==9)
        printf("A");
    else if(a/10==8)
        printf("B");
    else if(a/10==7)
        printf("C");
    else if(a/10==6)
        printf("D");
    else
        printf("F");
    return 0;
}