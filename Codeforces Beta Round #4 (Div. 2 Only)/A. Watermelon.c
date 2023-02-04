#include<stdio.h>
int main(void)
{
    int w;
    scanf("%d",&w);
    if(w%2==0&& w>2 && w<101)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}
