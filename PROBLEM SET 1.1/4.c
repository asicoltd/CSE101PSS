#include <stdio.h>

int main()
{   int x,n=0,y,i;
    printf("Enter a Decimal number:");
    scanf("%d",&x);
    i=x;
    do{
        y=x/2;
        n=x%2+n*10;
        if(x/2!=0){
            x=y;}
    }
    while(y>0);

    x=n+y;
    n=0;
    //Next part to xyz to zyx
    do{
    n=x%10+n*10;
    y=x/10;
    x=y;}
    while(y>0);
    n=n+y;
    n=n*10;
    printf("BINARY form of %d is %d",i,n);

    return 0;
}
