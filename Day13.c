#include<stdio.h>

void main()
{
    //두 정수를 입력하고 대 비교하기
    int num1=0,num2=0,MAX=0;
    char * n1Msg="첫번째 정수: ";
    char * n2Msg="두번째 정수: ";

    int condition1= 0, condition2= 0;
    char * format="";

    printf("%s", n1Msg);
    scanf("%d",&num1);

    printf("%s",n2Msg);
    scanf("%d",&num2);

    condition1=num1 > num2;
    condition2=num1 == num2;

    format= condition2 ? "%s":"더 큰 값은: %d";
    
    printf(format,condition1 ? num1 :
     condition2 ? "두 수가 같습니다.":num2);
    //num1 > num2 ? printf("더 큰 값: %d",num1):
    //    num1 == num2 ? printf("두수가 값습니다."): printf("더 큰 값:%d",num2);

    //printf("%d %d",num1,num2);

    //MAX= num1>num2 ? num1: num2;
    //printf("큰수는 %d",MAX);
}