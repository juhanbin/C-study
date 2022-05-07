#include<stdio.h>

int main()
{
    int h,m,o=0;
    scanf("%d %d %d",&h,&m,&o);

    if((m+o)>=60)
    {
        if(h+(m+o)/60<24)
        {
            printf("%d %d",h+(m+o)/60,(m+o)%60);
        }
        else
        {
            printf("%d %d",(h+(m+o)/60)%24,(m+o)%60);
        }
    }
    else
    {
        printf("%d %d",h,m+o);
    }
    return 0;
}