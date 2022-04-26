//정수 n을 입력받는다. n의 크기만큼 배열을 동적할당 받아서 만든다. 그 안의 내용은 1~n까지로 채운다. 그리고 출력까지

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n=0;
    printf("입력하시오");
    scanf("%d",&n);

    int *ptr= (int *)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++)
    {
        *(ptr+i)=i+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
}