#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a > b && a > c && a > d)printf( "%d is the largest number\n", a);
    else if(a < b && a < c && a < d )printf( "%d is the smallest number\n", a);
    if(b > a && b > c && b > d)printf( "%d is the largest number\n", b);
    else if(b < a && b < c && b < d)printf( "%d is the smallest number\n", b);
    if(c > a && c > b && c > d)printf( "%d is the largest number\n", c);
    else if(c < a && c < b && c < d )printf( "%d is the smallest number\n", c);
    if(d > a && d > b && d > c )printf( "%d is the largest number\n", d);
    else if(d < a && d < b && d < c)printf( "%d is the smallest number\n", d);

    return 0;
}
