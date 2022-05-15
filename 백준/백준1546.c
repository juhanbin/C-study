#include<stdio.h>

int main()
{
    int N=0;
    float total=0.0;
    scanf("%d",&N);
    float arrdata[N];
    int Max=0;

    for(int i=0;i<N;i++)
    {
        scanf("%f",arrdata+i);
        
    }

    for(int i=0;i<N;i++){
        if(Max<arrdata[i])
        {
            Max=arrdata[i];
        }
        
    }

    for(int i=0; i<N; i++){
        arrdata[i] = (arrdata[i]/Max) * 100;

    
        total += arrdata[i];
    }

    printf("%f",total/N);

    return 0;
}