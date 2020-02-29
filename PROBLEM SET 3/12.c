#include <stdio.h>
int main(){
    int x,y=0,z;
    scanf("%d",&x);
    while( x > 0){
            y = x % 10;
            x = x / 10;
        printf("%d",y);
        }
return 0;
}

//DONE
