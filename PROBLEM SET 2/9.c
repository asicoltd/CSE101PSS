#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i<1){
        printf("Calm");
    }
    else if(i>=1 && i<=3){
        printf("Light air");
    }
    else if(i>=4 && i<=27){
        printf("Breeze");
    }
    else if(i>=28 && i<=47){
        printf("Gale");
    }
    else if(i>=48 && i<=63){
        printf("Storm");
    }
    else if(i>63){
        printf("Hurricane");
    }
return 0;
}
