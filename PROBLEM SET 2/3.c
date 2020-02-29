#include<stdio.h>
int main()
{
    float i,tax;
    scanf("%f",&i);

    if(i < 2500){
        printf("The minimum charge is 39");
    }
    else if(i >= 2500 && i <= 6250){
        tax = 56 + i * .0066;
        printf("%f", tax);
    }
    else if(i > 6250 && i <= 20000){
        tax = 76 + i * .0034;
        printf("%f", tax);
    }
    else if(i > 20000 && i <= 50000){
        tax = 100 + i * .0022;
        printf("%f", tax);
    }
    else if(i > 50000 && i <= 500000){
        tax = 155 + i * .0011;
        printf("%f", tax);
    }
    else{
        tax = 255 + i * 0.0009;
        printf("%f",tax);
    }


return 0;
}
