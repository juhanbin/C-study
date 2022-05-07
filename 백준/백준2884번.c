#include<stdio.h>

int main()
{
    int h,m=0;
    scanf("%d %d",&h,&m);
    if(m>=45)
    {
        printf("%d %d",h,m-45);
    }
    else
    {
        if(h==0)
        {
            printf("23 %d",m+15);
        }
        else
        {
            printf("%d %d",h-1,m+15);
        }
    }
}