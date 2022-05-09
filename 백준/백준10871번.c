#include<stdio.h>

int main()
{
    int X,N=0;
    int A=0;
    scanf("%d %d",&N,&X);
    if(1<=N && X<=10000)
    {
        for(int i=0;i<N;i++)
        {
            scanf("%d",&A);
            if(A<X)
            {
                printf("%d ",A);
            }
        }
        return 0;
    }
    
}