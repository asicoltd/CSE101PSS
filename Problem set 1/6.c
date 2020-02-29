#include <stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d",&a);
    b= a/100;
    c= a%100/10;
    d= a%100%10;
    printf("%d\t%d\t%d",b,c,d);

    return 0 ;
}
