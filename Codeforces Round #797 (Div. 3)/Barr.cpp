
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
        int a[n],b[n];

        for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<n;i++) cin>>b[i];

        for(i=0;i<n;i++)
        {
            if(b[i]>a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            k=0;
            for(i=0;i<n;i++)
            {
                maxDif=max(maxDif,a[i]-b[i]);
            }

            for(i=0;i<n;i++)
            {
                if(a[i]-b[i]!=maxDif)
                {
                    if(b[i]!=0)
                    {
                        k=1;
                        break;
                    }
                }
            }
            if(k) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }


    }
}
