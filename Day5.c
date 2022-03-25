#include<stdio.h>

void main(){
    int age=10;
    float height = 125.3f;
    double weight=35.956;
    char grade = 'A';
    char * str= "주한빈";

    printf("나이 : %d살\n",age);
    printf("키 : %.1fcm\n",height);    //소수점을 자를 때 6부터 반올림 된다.
    printf("몸무게 : %.2lf\n",weight);
    printf("수행평가 : %c등급",grade);
    printtf("이름 : %s",name);
}