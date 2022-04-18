#include <stdio.h>
void main()
{
    // //반복문을 한 번만 사용해서 구구단 1~9단 출력
    // int arrData[9]={1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<81;i++)
    // {
    //     printf("%d*%d=%d\n",i/9+1,i%9+1,(i/9+1)*(i%9+1));
    // }

    for(int i=1;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {
            printf("%d*%d=%d\n",i,j,i*j);
        }
    }
}