

#include<stdio.h>
int main(void)
{
    int n,m,x,r,p,t,u,sum=0,i=2,k=0,f=0,d=0,e;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&p,&d);
        scanf("%d",&x);
        sum=x;
        p--;
        while(p--)
        {
            scanf("%d",&x);
            if(x==0)
            {
                i++;
                continue;
            }
            f=i-1;
            k=d/f;
            if(k>=x)
            {
                d=d-(x*f);
                sum+=x;
            }
            else
            {
                d=0;
                sum+=k;
            }
            i++;
        }
        printf("%d\n",sum);
        sum=0,i=2,k=0,f=0,d=0;

    }

    return 0;
}
