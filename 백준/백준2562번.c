#include<stdio.h>

int main()
{
    int arrdata[9]={0, };
    int Max=0;
    int A=0;
    for(int i=0;i<9;i++)
    {
        scanf("%d",arrdata+i);
        Max=arrdata[0];
    }
    for(int i=0;i<9;i++)
    {
        if(Max<arrdata[i])
        {
            Max=arrdata[i];
            A=i;
        }
    }
    printf("%d\n%d",Max,A+1);

    return 0;
}