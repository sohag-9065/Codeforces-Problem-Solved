
#include<bits/stdc++.h>
using namespace std;
int main(void)
{

    int test;
    cin >> test;
    while(test--)
    {
        int n,flag =0,k,i,maxDif=0;
        cin >> n;
        int a[n],b[n],c[n];

        for(i=0; i<n; i++) cin>>a[i];

        for(i=0; i<n; i++) cin>>b[i];
        c[0] = b[0] - a[0];

        for(i=1; i<n; i++)
        {
            if(a[i] > b[i-1])c[i] = b[i] - a[i];
            else c[i] = b[i] - b[i-1];
        }
        for(i=0; i<n; i++) cout<<c[i] <<   " " ;


        cout<<endl;



    }
}
