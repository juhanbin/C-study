#include<stdio.h>
void main()
{
    int arrData[2][3]={0, };
    int total=0;
    double avg=0.0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d동 %d호 월세입력[단위:만원]\n",i+1,j+1);
            scanf("%d",arrData[i]+j);
            total +=arrData[i][j];
        }
    }
    avg=(total)/6;
    printf("총 월세: %d만원\n",total);
    printf("평균 월세: %f만원",avg);
}