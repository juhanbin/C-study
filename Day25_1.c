#include<stdio.h>

void main()
{
    //""빈 문자열
    char fruit[6]=""; 

    printf("과일이름:");
    scanf("%s",fruit);
    printf("%s는 맛있어!",fruit);
}