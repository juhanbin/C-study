#include<stdio.h>

int main()
{
    int N=0;
    int ship,il=0;
    int A=0;
    scanf("%d",&N);
    int newN=N;
    while(1)
    {
        il=newN%10;
        ship=newN/10;

        newN=il*10+(il+ship)%10;

        A+=1;

        if(newN==N)
        {
            break;
        }
    }
    printf("%d",A);
    return 0;
}