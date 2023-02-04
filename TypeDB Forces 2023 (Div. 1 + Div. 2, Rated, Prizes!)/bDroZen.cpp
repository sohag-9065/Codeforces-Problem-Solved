#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mem(a,b) memset(a,b,sizeof(a))
int32_t main()
{
    fast();
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a=n;
        int mx=1;
        map<int,int>m;
        for (int i = 2; i*i <= n; i++)
        {
            if(a%i==0)
            {
                int cnt=0;
                while (a%i==0)
                {
                    cnt++;a/=i;
                }
                m[i]=cnt;
                if(cnt>mx)
                    mx=cnt;
            }
            }
            if(a!=1) m[a]=1;
            int d=0;
            for (int i = 0; i < mx; i++)
            {
                int b=1;
                for(auto u : m)
                {
                    if(u.second!=0)
                    {m[u.first]-=1;
                    b*=u.first;
                    }
                }
                d+=b;
            }
            cout<<d<<endl;

        }

    }
