#include<stdio.h>
int main(void)
{
    int n,r1=0,r2=0,s=0,p,q;
    scanf("%d",&n);
    int i,a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(a[i]==b[i])continue;
        else if(a[i])r1++;
        else r2++;
    }

    if(r1==0)printf("-1\n");
    else
    {
        printf("%d\n",(r2/r1)+1);
    }
    return 0;
}
