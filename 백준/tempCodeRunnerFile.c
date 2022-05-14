#include<stdio.h>

int main()
{
    
    int arrdata[10]={0, };
    int total=0;

    for(int i=0;i<10;i++)
    {
        scanf("%d",arrdata+i);
    }
    for(int i=0;i<10;i++)
    {
       
        if(arrdata[i]%42!=arrdata[i+1]%42)
        {
            total++;
        }
        
    }
    printf("%d",total);
}