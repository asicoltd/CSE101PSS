#include <stdio.h>

int main(){
    int a, b, c, d, e, f;
    scanf("%d%d%d%d",&e,&f,&c,&d);
    a = e + c ;
    b = f + d ;
    scanf("%d%d%d%d",&e,&f,&c,&d);
    a += e + c ;
    b += f + d ;
    scanf("%d%d%d%d",&e,&f,&c,&d);
    a += e + c ;
    b += f + d ;
    b *= 3 ;
    a += b - 1 ;
    a = 9 - a % 10;
    printf("%d",a);

    return 0;
}
