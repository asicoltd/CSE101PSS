#include <stdio.h>
#include <math.h>
int main(){
    int n, x, y,m=0, n1, n2, sum=0;
    scanf("%d",&n);
    n1 = n;
    n2 = n;
    while( n1 > 0 ){
        n1 /= 10;
        m++;
    }

    while( n2 > 0){
        x = n % 10 ;
        y = pow(x,m);
        sum += y;
        n2 /= 10;
    }
    if( sum == n){
        printf("Armstrong Number\n");
    }
    else
        {printf("Not Armstrong Number\n");
    }
return 0;
}
//Done
