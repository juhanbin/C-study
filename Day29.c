#include<stdio.h>
#include<string.h>
void main()
{
    char title[20]="hb cafe";
    char menu[100]="1추가하기\n2수정하기\3검색하기\n4삭제하기\n5목록보기\n나가기";

    //메뉴 이름, 메뉴 가격
    char arName[200][100]={ "", };
    char temp[100]="";
    int arPrice[200]={0, };
    int choice=0;
    int cnt=0;
    int isDup;

    while(1)
    {
        printf("%s\n%s\n",title,menu);
        scanf("%d",&choice);
        if(choice==6){ break; }

        switch(choice)
        {
            case 1://추가하기
            {
                printf("메뉴 이름:");
                scanf("%s",temp);
                isDup=0;
                for(int i=0;i<cnt;i++)
                {
                    if(!strcmp(temp,arName[i]))
                    {
                        isDup=1;
                        break;
                    }
                }
                cnt++;
                if(!isDup)
                {  
                    printf("메뉴 가격: ");
                    scanf("%d",arPrice+cnt);
                    strcpy(arName[cnt],sizeof(arName[cnt]));  
                    cnt++;
                }
                
                else
                {
                    printf("이미 존재하는 상품입니다.");
                }
                break;
            }
            case 2:
                break;
            case 3:
                break;
        }
    }
}