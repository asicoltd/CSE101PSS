#include <stdio.h>
int main(){
    int n, m, o, digit = 0,power;
    scanf("%d",&n);
    m = n;
    while( n > 0){
            n /= 10;
            digit++;
        }
    while(digit>0){
        digit--;
        power = round(pow(10,digit));
        o = m / power;
        printf("%d   ",o);
        m = m - o * power;


    }

return 0;
}


//DONE
