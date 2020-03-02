# EWU-CSE101-PSS
#include<stdio.h>
int main()
{
    int i,n,y;
    printf("size: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    y=0;
    int b[n];
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[y]=a[i];
            y++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]<0);
        {
            b[y]=a[i];
            y++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[y]=a[i];
            y++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
