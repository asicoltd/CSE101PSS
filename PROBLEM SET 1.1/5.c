#include <stdio.h>

int main()
{   int x, y, z, temp;
    scanf("%d%d%d",&x,&y,&z);
    printf(" Before Swiping: a = %d, b = %d, c = %d\n",x,y,z);
    temp=z;
    z=y;
    y=x;
    x=temp;
    printf(" After right cyclic shift: a = %d, b = %d, c = %d\n",x,y,z);

    return 0;
}
