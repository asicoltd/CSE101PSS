#include <stdio.h>
int main(){
    float s, u, v, a, t;
    scanf("%f%f%f", &u, &a, &t);
    v = u + a * t;
    s = u * t + .5 * a * t * t;
    printf("v = %.0f\n",v);
    printf("s = %.0f",s);
    return 0;
    }
