
#include <iostream>
#include <algorithm>
#include<stdio.h>

const int SIZE = 5;
using namespace std;
int A[]={0,0,0,0,0};

int main(void)
{
    int i,n,j,m,sum=0;;
    scanf("%d %d",&n,&m);
    char st[n][m+5];
    int X[m];
    for(i=0; i<n; i++)
    {
        scanf(" %s",st[i]);
    }
    for(i=0; i<m; i++)
    {
        scanf("%d",&X[i]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {

            if(st[j][i]=='A')
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
        sort(A, A + SIZE);
        sum+=X[i]*A[4];
        A[0]=0;
        A[1]=0;
        A[2]=0;
        A[3]=0;
        A[4]=0;

    }
    printf("%d\n",sum);
    return 0;

}
