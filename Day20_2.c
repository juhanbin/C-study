#include<stdio.h>

void main()
{
    char * msg="Q.다음중 동물이 아닌 것은?";
    char * choiceMsg="1.강아지\n2.고양이\n3.코뿔소\n4.어묵";
    char * resultMsg="";

    int choice =0;
    int answer=4;

    while(1)
    {
        printf("%s\n%s\n",msg,choiceMsg);
        scanf("%d",&choice);

        if(choice == answer)
        {
            resultMsg="정답!\n";
        }
        else if(choice >=1&&choice<=3)
        {
            resultMsg="오답ㅠㅠ\n";
        }
        else
        {
            resultMsg="다시시도해주세요\n";
        }
        printf("%s",resultMsg);
    
        if(choice==answer)
        {
            break;
        }
    }
    
}