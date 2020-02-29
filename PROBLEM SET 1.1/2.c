#include <stdio.h>
#include <math.h>
int main(){
    float x;
    scanf("%f",&x);

printf("%.0f\n%.10f\n%.4f",x*x*x*x*x*x,cos(x*3.14159265/180),pow(x,.5));
return 0;
}
