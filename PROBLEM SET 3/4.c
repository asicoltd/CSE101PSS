#include <stdio.h>

int main(){
    int x, n, y=1 ;
    scanf("%d%d",&x,&n);
    while(n >= 1){
        y *= x;
        n --;
    }
    printf("%d",y);
    return 0;
}
//DONE
