#include<stdio.h>
#include<string.h>

void main()
{
    char nation[6]="kerea";
    // scanf("%s\n",nation);
    // printf("%s\n",nation);
    // strcpy(nation,"japan");
    // printf("%s\n",nation);

    // printf("%d\n",strcmp(nation,"japan"));
    // printf("%d\n",strcmp(nation,"apple"));
    // printf("%d\n",strcmp(nation,"data"));
    // printf("%d\n",strcmp(nation,"korea"));

    printf("%d\n",44);
    scanf("%s",nation);
    if(!strcmp(nation,"korea"))
    {
        printf("두 값은 같은 값입니다.");
    }
}