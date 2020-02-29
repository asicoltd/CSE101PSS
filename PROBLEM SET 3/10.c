#include <stdio.h>
int main(){
    int i, j=0, n;
    scanf("%d",&n);
    for( i=2 ; i <= n ; i++ ){
        if( n % i == 0 && i % 2 != 0){
            j++;
        }
    }
    printf("%d",j);

return 0;
}

//DONE
