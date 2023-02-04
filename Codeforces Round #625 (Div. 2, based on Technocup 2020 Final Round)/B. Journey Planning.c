
#include<stdio.h>
int main(void)
{
    int n,i,j,sum=0,mx=0,x,mxn=0,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    mx=a[0];
    for(i=0; i<n-1; i++)
    {
        sum=0;
        x=a[i];
        if(a[i]==0)continue;
        k=i;
        for(j=i+1; j<n; j++)
        {
            if(mx<a[j])mx=a[j];
            if((a[j]-x)==(j-k))
            {
                if(sum==0)
                {
                    sum=x+a[j];
                    k=j;
                }
                else
                {
                   sum+=a[j];
                    k=j;
                }
                x=a[j];
                a[j]=0;
            }
        }
        if(mxn<sum)mxn=sum;
    }
    if(mx<mxn)mx=mxn;
    printf("%d\n",mx);
    return 0;
}
