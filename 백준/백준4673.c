#include<stdio.h>

int main()
{
    int num=1;
    int nwenum=num;
    while(1)
    {
        
        printf("%d\n",nwenum+nwenum+nwenum%10);
        if(nwenum>10000)
        break;
    }
    return 0;
}