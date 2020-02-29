#include <stdio.h>

int main(){
    int a=0, b=0, c, d, e, f;
    scanf("%d%d%d%d",&e,&f,&c,&d);
    a += e + c ;
    b += f + d ;
    scanf("%d%d%d%d",&e,&f,&c,&d);
    a += e + c ;
    b += f + d ;
    scanf("%d%d%d%d",&e,&f,&c,&d);
    a += e + c ;
    b += f ;
    a = 9 - a * 3 + b - 1 % 10;
    if (a == d)
    printf("Valid\n");
    else
    printf("Not Valid\n");
    return 0;
}



