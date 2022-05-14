#include<stdio.h>

int main()
{
    
    int arrdata[10]={0, };
    int total=0;
    int remain[10] = {0, };

    for(int i=0;i<10;i++)
    {
        scanf("%d",arrdata+i);
        remain[i] = arrdata[i] % 42;
    }
    for(int i=0;i<10;i++)
    {
       int count = 0;
       for(int j=i+1; j < 10; j++){

           if(remain[i] == remain[j]){
               count++;
           }

       }

       if(count == 0){
           total++;
       }
    }
    printf("%d",total);
}