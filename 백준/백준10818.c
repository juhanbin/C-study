#include<stdio.h>

int main()
{
    int N=0;
    scanf("%d",&N);
    int arData[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d",arData+i);
    }

    int Max=arData[0];
    int Min=arData[0];

    for(int i = 1; i < N; i ++){
        if(Max < arData[i]){
            Max = arData[i];
        }
        if(Min > arData[i]){
            Min = arData[i];
        }
    }
    printf("%d %d",Min,Max);
}