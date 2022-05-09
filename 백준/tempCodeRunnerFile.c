#include<stdio.h>

int main()
{
    int X,N=0;
    scanf("%d %d",&X,&N);
    for(int i=0;i<=X;i++)
    {
        int A=0;
        scanf("%d",&A);
        if(A<=N)
        {
            printf("%d\n",A);
        }
    }
    return 0;
}