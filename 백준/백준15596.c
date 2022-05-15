#include<stdio.h>

int sum(int *a, int n)
{
    int result = 0;
    for(int i=0; i<n; i++){
        result += a[i];
    }

    return result;
}
int main()
{

    return 0;
}