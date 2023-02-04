#include<stdio.h>
int main()
{
    long long int i,j,k,ar[100000],a,b,c,d;
    scanf("%lld %lld",&a,&b);
    for(i=1;i<=b;i++)
    {
        scanf("%lld",&ar[i]);
    }
    k=0;
    for(i=1;i<b;i++)
    {
        if(a%2==0)
        {

        }
        else
        {
            if(ar[i]%2==0)
            {

            }
            else
            {
                k++;
            }
        }
    }
    if(ar[b]%2==0)
    {

    }
    else
    {
        k++;
    }
    if(k%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
