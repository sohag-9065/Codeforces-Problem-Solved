#include<bits/stdc++.h>
using namespace std;
#define ll  int long long
int main()
{
    ll test , n ,ans ,m;
    cin >> test ;
    while(test--)
    {
        cin >> n ;
        if(n==1)
        {
            cout << "3" << endl;
        }
        else if(n%2==1)
        {
            cout << "1" << endl;
        }
        else
        {
            ans=1;
            m=n;
            while(m%2==0)
            {

                m/=2;
                ans*=2;
                cout << "a " << m  << " ans " << ans<< endl;
            }
            if(n==ans)
            {
                cout << n+1 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
    }
}
