#include<stdio.h>

int main()
{
    int A,B=0;
    scanf("%d",&A);
    scanf("%d",&B);
    printf("%d\n",A*(B%10));
    printf("%d\n",A*((B%100)/10));
    printf("%d\n",A*(B/100));
    printf("%d",A*(B%10)+10*(A*((B%100)/10))+100*(A*(B/100)));
}