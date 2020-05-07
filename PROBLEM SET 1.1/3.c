#include <stdio.h>

int main()
{   int x,n=0;
    printf("Enter a Decimal number:");
    scanf("%d",&x);
    int y = 0;
    while( x > 0 ){
        y = x % 8 + y*10;
        x /= 8;
    }
    while( y > 0 ){
        x = y % 10 + x*10;
        y /= 10;
    }
    printf("Octal Value :%d\n",x);
    return 0;
}
