#include<stdio.h>

void main()
{
    //두 정수를 입력받고 대소 비교 하기
    int num1=0,num2=0;
    char * n1Msg = "첫번째 정수";
    char * n2Msg = "두번째 정수";

    printf("%s\n",n1Msg);
    scanf("%d",&num1);

    printf("%s\n",n2Msg);
    scanf("%d",&num2);

    if(num1 > num2)
    {
        printf("큰 값 : %d\n",num1);
    }
    else if(num1 != num2)  //num1>num2 조건식이 거짓이므로 num1과 num2가 같지 않다면 num2가 큰값이다.
    {
        printf("큰 값 : %d\n",num2);
    }
    else
    {
        printf("두 값이 갇다\n");
    }
}