
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,a=0,b=0,n;
    cin>>n;
    if (n==0) cout<<"-1"<<endl;
    else if(n==1)
    {
        cin>>i;
        cout<<"-1"<<endl;
    }
    else if(n==2)
    {
        cin>>i>>j;
        if(i==j)cout<<"-1"<<endl;
        else  cout<<"1"<<endl<<"1"<<endl;
    }
    else if(n==3)
    {
        cin>>i>>j>>k;
        cout<<2<<endl;
        if(i+j==k) cout<<"1 3"<<endl;
        else cout<<"1 2"<<endl;
    }
    else
    {
        for(i=0; i<n/2; i++)
        {
            cin>>j;
            a+=j;
        }
        for(i=n/2; i<n; i++)
        {
            cin>>j;
            b+=j;
        }
        //cout<<a<<b;
        if(a!=b)
        {
            cout<<n/2<<endl;
            for(i=0; i<n/2; i++)
            {
                cout<<i+1<<" ";
            }
        }
        else
        {
            //cout<<n/2<<endl;
            cout<<(n/2)+1<<endl;
            for(i=0; i<=n/2; i++)
            {
                cout<<i+1<<" ";
            }

        }

    }
}
