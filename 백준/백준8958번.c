#include<stdio.h>

int main()
{
    int N=0;
    char OX=" ";
    int total=0;
    scanf("%d",&N);

    while(1)
    for(int i=0;i<N;i++)
    {
        while(1)
        {
            scanf("%c",&OX);
            
            if(OX=="O")
            {
                total+=1;
            }

            if(OX=='\0')
            {
                break;
            }
        }
        printf("%d",total);
    }
    return 0;
}