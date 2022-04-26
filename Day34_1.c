#include<stdio.h>
#include<stdlib.h>

#define l 3
typedef struct Fruit
{
    char name[200];
    int price;
    char season[200];
}F;

void main()
{
    F*fruits=0;
    int size=0;
    printf("입력하실 과일을 입력하세요\n");
    scanf("%d",&size);

    fruits=(F*)colloc(size,sizeof(F));
    for (int i = 0; i < size; i++) {
		printf("%d번째 과일명: ", i+1);
		scanf("%s", fruits->name, sizeof(fruits->name));

		printf("%s 가격", fruits->name);
		scanf("%d", &fruits[i].price);
        
		printf("%s 시즌", fruits->name);
		scanf("%s", fruits->season, sizeof(fruits->season));

		printf("%s, %d, %s\n", fruits->name, fruits[i].price, fruits->season);
	}

    // F fruit[l]=
    // {
    //     {"사과",1500,"가을"},
    //     {"배",3500,"겨울"},
    //     {"바나나",500,"여름"}
    // };

    // for(int i=0;i<l;i++)
    // {
    //     printf("%s,%d,%s\n",fruit[i].name,fruit[i].price,fruit[i].season);
    // }


    // f apple={"사과",1500,"가을"};
    // f pear={"배",3500,"겨울"};
    // f banana={"바나나",500,"여름"};

    // printf("%s,%d,%s\n",apple.name,apple.price,apple.season);
    // printf("%s,%d,%s\n",pear.name,pear.price,pear.season);
    // printf("%s,%d,%s\n",banana.name,banana.price,banana.season);
}