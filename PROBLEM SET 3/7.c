#include <stdio.h>
#include <math.h>
int main(){
    int i, j, n, sum=0;
    scanf("%d",&n);
    for( i=1 ; i <= n ; i++ ){
        j = pow(3,i);
        sum += i*j;
    }
    printf("%d",sum);
    }
//DONE
