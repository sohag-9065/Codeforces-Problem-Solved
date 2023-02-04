// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);



int main(void)
{
    optimize();
    // cout << isPrime( 5) ;



    int test;
    cin >> test;

    while(test--)
    {
        ll n;
        cin >> n;

        set<int> s;
        map<ll, int> mp;

        int a=n;


        for (int i = 2; i*i <= n; i++)
        {
            if(a%i==0)
            {
                s.insert(i);
                mp[i]++;

                a /= i;
                i--;
            }
        }

        if(a!=1)
        {
            mp[a]=1;
            s.insert(a);
        }

         /*
        for(auto u: s) cout << u << " " ;

        cout <<  endl;
        for(auto u: mp)
        {
            cout << u.first  << " " << u.second << endl ;
        } */

        ll ans = 0;
        while( !s.empty() )
        {
            ll x = 1;

            for(auto v: mp)
            {
                if(v.second)
                {
                    x *= v.first;
                    mp[v.first]--;
                }
                else
                {
                    s.erase(v.first);
                }
            }
            //cout << " x " << x << endl;

            if( x != 1)
            {
                ans += x;
            }
        }

        cout   << ans << endl;
    }
    return 0;
}

//Alhamdulillah

