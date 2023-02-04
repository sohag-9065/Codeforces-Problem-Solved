

#include <iostream>
#include <vector>
#include<stdio.h>
#include <algorithm>

using namespace std;


int main(void)
{
    int i,n,j,m,s1=0,s2=0;
    scanf("%d",&n);

    vector<int> myvector;
    vector<int> myvector1;

    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        myvector.push_back(m);
    }
    sort (myvector.begin(), myvector.end());
    for(i=0; i<n; i+=2)
    {
        s2+=s1;
        s1=myvector[i]-myvector[i+1];
        myvector.push_back(s1);

        j=s1;
    }

      sort (myvector1.begin(), myvector1.end());

       // sort(A, A + SIZE);


    if(j<s2&&(j+s2)%2==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;

}
