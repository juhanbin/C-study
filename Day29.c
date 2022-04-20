#include<stdio.h>
#include<string.h>
void main()
{
    char title[20]="hb cafe";
    char menu[100]="1추가하기\n2수정하기\n3검색하기\n4삭제하기\n5목록보기\n6나가기";

    //메뉴 이름, 메뉴 가격
    char arName[200][100]={ "", };
    char temp[100]="";
    int arPrice[200]={0, };
    int choice=0;
    int cnt=0;
    int isDup;
    int foundIdx=0;

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
            }
            case 2://수정하기
                printf("수정하실 기존 상품명:");
                scanf("%s",temp);

                for (int i=0;i<cnt;i++)
                {
                    if(!strcmp(temp,arName[i]))
                    {
                    isDup=1;
                    break;
                    }
                }

                if(isDup)
                {
                    printf("수정하실 새로운 상품명:");
                    scanf("%s,temp");
                    isDup=0;
                    for(int i=0;i<cnt;i++)
                    {
                        if(!strcmp(temp,arName[i]))
                        {
                            isDup=1;
                            foundIdx=i;
                            break;
                        }
                    }
                    if(!isDup)
                    {
                        printf("상품가격:");
                        scanf("%d",arPrice+foundIdx);
                        strcpy(arName[foundIdx],sizeof(arName[foundIdx]));
                    }
                    else
                    {
                        printf("이미 존재하는 상품입니다.\n");
                    }
                }
                else
                {
                    printf("수정하실 상품이 존재하지 않습니다.\n");
                }
                break;
            case 3://검색하기
                printf("검색하실 상품명 입력:");
                scanf("%s",temp);
                isDup=0;
                for(int i=0;i<cnt;i++)
                {
                    if(!strcmp(temp,arName[i]))
                    {
                        printf("%s(%d원)\n"arName[i],arPrice[i]);
                        isDup=1;
                        break;
                    }
                }
                if(!isDup==0)
                {
                    printf("검색하신 상품이 존재하지 않습니다.\n");
                }
                break;
            case 4://삭제하기
                printf("삭제할 상품명 입력:");
                scanf("%s",temp);
                isDup=0;
                for(int i=0;i<cnt;i++)
                {
                    if(!strcmp(temp,arName[i]))
                    {
                        isDup=1;
                        foundIdx=i;
                        break;
                    }
                    else
                    {
                        strcpy(arName[i],sizeof(arName));
                    }
                    cnt--;
                }

                if(isDup)
                {
                    for(int i=foundIdx;i<cnt;i++)
                    {
                        if(i==199)
                        {
                            strcpy_s(arName[i],sizeof(arName[i]),arName[i+1]);
                        }
                    }
                    cnt--;
                }
                else
                {
                    printf("삭제하실 상품이 존재하지 않습니다.\n");
                }
                

                break;
            case 5://목록보기
                printf("상품명(가격)\n");
                for(int i=0;i<cnt;i++)
                {
                    printf("%s(%d원)\n",arName[i],arPrice[i]);
                }
                if(cnt==0)
                {
                    printf("상품 없음\n");
                }
                break;
        }
    }
}