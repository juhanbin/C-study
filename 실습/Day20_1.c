#include<stdio.h>
void main()
{
    char * qMsg = "당신의 혈액형은?";
    char * choiceMsg="1.A\n2.B\n3.O\n4.AB\n5.나가기";
    char * aMsg="꼼꼼하고 세심하다.";
    char * bMsg="추진력이 좋다.";
    char * oMsg="착하다.";
    char * abMsg="착하다";
    char * errorMsg="다시 시도해주세요";
    char * resultMsg="";

    int choice =0;

 

    while(choice != 5)
    {
    printf("%s\n%s\n",qMsg,choiceMsg);
    scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            resultMsg=aMsg;
            break;
        case 2:
            resultMsg=bMsg;
            break;
        case 3:
            resultMsg=oMsg;
            break;
        case 4:
            resultMsg=abMsg;
            break;
        default:
            resultMsg=errorMsg;
            break;
        }
        if(choice == 5)
        {
            resultMsg="종료합니다.";
        }
        puts(resultMsg);
    }
   

   
}