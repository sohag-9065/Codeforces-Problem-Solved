#include  <stdio.h>
#include <math.h>

int main()
{
    int k,n,i;
    scanf("%d %d",&k,&n);
    int ar[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    if(k%2==0)
    {
        if(ar[n-1]%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
    else
    {
        int count=0;
        for(  i=0;i<n;i++)
        {
            if(ar[i]%2==1)
            {
                count++;
            }
        }
        if(count%2==0)
            printf("even");
        else
            printf("odd");
    }
}
