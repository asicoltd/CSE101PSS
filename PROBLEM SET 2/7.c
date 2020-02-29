#include <stdio.h>
int main(){
    int a, b, c, d, e, f;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&d,&e,&f);
    if(a>d){printf("%d/%d/%d is earlier than %d/%d/%d\n",d,e,f,a,b,c);}
    else if(a<d){printf("%d/%d/%d is earlier than %d/%d/%d\n",a,b,c,d,e,f);}
    else if(a=d){
            if(b>e){printf("%d/%d/%d is earlier than %d/%d/%d\n",d,e,f,a,b,c);}
            else if(b<e){printf("%d/%d/%d is earlier than %d/%d/%d\n",a,b,c,d,e,f);}
            else if(b=e){
                    {
                    if(b>e){printf("%d/%d/%d is earlier than %d/%d/%d\n",d,e,f,a,b,c);}
                    else if(b<e){printf("%d/%d/%d is earlier than %d/%d/%d\n",a,b,c,d,e,f);}
                    else if(b=e){printf("%d/%d/%d and %d/%d/%d are same\n",a,b,c,d,e,f);}
                    }
                        }
                }

            }
