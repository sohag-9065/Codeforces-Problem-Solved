
#include<stdio.h>
int main(void)
{
    int a,b,i,test,even,odd;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            printf("0\n");
        }
        else if(a>b)
        {
            if((a-b)%2==0)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
        else
        {
            if((a-b)%2==0)
            {
                printf("2\n");
            }
            else
            {
                printf("1\n");
            }
        }

    }
    return 0;
}
