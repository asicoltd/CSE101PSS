#include <stdio.h>
int main(){
    int sec, min , hour, rem_sec;
    scanf("%d", &sec);
    hour = sec/3600;
    min = sec%3600/60;
    rem_sec= sec%3600%60;
    printf("%d: %d: %d\n",hour,min,rem_sec);
    return 0;
}
