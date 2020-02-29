#include <stdio.h>
int main()
{
int a,b,c;
scanf("%f",&a);
if(a<30000){
b=4/100;
}
else if(a>=30000&&a<=70000){
b=10/100;
}
else if(a>=70000){
b=15/100;
}
c=a*b;
printf("%f",c);
return 0;
}

