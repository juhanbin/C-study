#include<stdio.h>
//포인터 복습
void main()
{
    int data=10;
    int *pData=&data;
    printf("%d\n",*pData);
    *pData=20;
    printf("%d\n",data);
}