#include<stdio.h>

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