#include <stdio.h>
int main(){
    int i, j, n, sum=0;
    scanf("%d",&n);
    for( i=1 ; i <= n ; i++ ){
        sum += i*(i+1)*(i+2);
    }
    printf("%d",sum);
    }

//DONE
