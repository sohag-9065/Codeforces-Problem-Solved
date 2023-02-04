#include<stdio.h>
int main(void)
{
    int i,n,j,m,A[]={0,0,0,0,0};
    scanf("%d %d",&n,&m);
    char st[n][m+5];
    for(i=0; i<n; i++)
    {
        scanf(" %s",st[i]);
        printf(" %s\n",st[i]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {

            if(st[j][i]=='a')
            {
                A[0]+=1;
            }
            else if(st[j][i]=='B')
            {
                A[1]+=1;
            }
            else if(st[j][i]=='C')
            {
                A[2]+=1;
            }
            else if(st[j][i]=='D')
            {
                A[3]+=1;
            }
            else if(st[j][i]=='E')
            {
                A[4]+=1;
            }
        }
        printf(" %d\n",A[0]);

    }


}
