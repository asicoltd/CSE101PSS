#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);

    if( i/10 == 0){
        printf("Number of digits = 1");
    }
    else if( i / 100 == 0){
        printf("Number of digits = 2");
    }
    else if(i / 1000 == 0){
        printf("Number of digits = 3");
    }
    else if(i / 10000 == 0){
        printf("Number of digits = 4");
    }
    else if(i / 100000 == 0){
        printf("Number of digits = 5");
    }


return 0;
}
