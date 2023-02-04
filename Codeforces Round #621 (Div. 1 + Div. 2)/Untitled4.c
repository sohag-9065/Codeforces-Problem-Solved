

#include<stdio.h>
int main(void)
{
    int n,x,p,d,sum=0,mx=0, mxl,mxe=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&p,&d);
        scanf("%d",&x);
        if(x>d)mx=x;
        if(x==d)mxe=x;
        mxl=x;
        p--;
        while(p--)
        {
            scanf("%d",&x);
            if(x==d)
            {
                mxe=x;
            }
            else if(x<d)
            {
                if(x>mxl)mxl=x;
            }
            else
            {
                mx=x;
            }
        }
        if(mxe!=0)
        {
            printf("1\n");
        }
        else if(mx!=0)
        {
            printf("2\n");
        }
        else
        {
            sum=d/mxl;
            if(d%mxl!=0)sum++;
            printf("%d\n",sum);
        }
        sum=0;
        mx=0;
        mxe=0;
    }

    return 0;
}

