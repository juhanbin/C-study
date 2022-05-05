#include<stdio.h>
//구조체 복습
struct Animal
{
    char name[200];
    int age;
    char feed[200];
};

void main()
{
    struct Animal dog={"Max",10,"개껌"};
    printf("%s,%d,%s",dog.name,dog.age,dog.feed);
}