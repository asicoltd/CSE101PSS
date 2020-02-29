#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    if(i == 24){
        printf("00:00");
    }
    else if( i > 12 ){
        i = i - 12;
        printf("%d:%d",i,j);
    }
    else
        printf("%d:%d",i,j);

return 0;
}
