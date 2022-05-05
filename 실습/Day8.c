#include<stdio.h>

void main()
{
    //정수 2개 입력 받고 더기
    int num1=0,num2=0,result=0;

    printf("첫번째 정수: \n");
    scanf("%d", &num1);

    printf("두번째d 정수: \n");
    scanf("%d",&num2);

    //printf("%d %d",num1,num2);

    result=num1+num2;
    printf("%d+%d=%d",num1,num2,result);

}