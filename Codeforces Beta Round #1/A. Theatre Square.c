
#include<stdio.h>
int main(void)
{
    long long int n,m,x,r,t,u;
    scanf("%lld %lld %lld",&n,&m,&x);
    r=n/x;
    if(n%x!=0)r++;
    t=m/x;
    if(m%x!=0)t++;
    u=r*t;
    printf("%lld\n",u);
    return 0;
}
