
#include<stdio.h>


int main(void)
{
    int amount=0,n,m ;
    int v=0,x=0;
    scanf("%d %d",&n,&m);
    if(n<=0)return 0;
    if(n==m)
    {
        amount=n-1;
        printf("%d\n",amount);
    }
    else if(n<m)
    {
        amount=n-1;
        printf("%d\n",amount);
    }
    else
    {
        amount = m;
        v = n-m;
        x = (v*(v+1))/2;
        amount += (x-1);
        printf("%d\n",amount);
    }
     return 0;
}
