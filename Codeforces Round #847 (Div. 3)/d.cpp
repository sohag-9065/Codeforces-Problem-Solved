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

#define mem(a,b) memset(a, b, sizeof(a) )

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(void)
{
    optimize();

    int test;
    cin >> test;

    while(test--)
    {
        int n;
        ll a, b;
        cin >> n;

        map<ll, int> mp;
        set<int> s;

        for( int i = 1 ; i<= n ; i++)
        {
            cin >> b;
            s.insert ( b );
            mp[b]++;
        }

/*
         for( auto u : s )
        {
            cout << u << " " ;
        }

        cout  << endl;
        cout  << endl;

         for( auto u : s )
        {
            cout << mp[u] << " " ;
        }

        cout  << endl;
        cout  << endl;
*/

        int c = mp[*s.begin()], feq = mp[*s.begin()] , lastElement = *s.begin();
        s.erase ( s.begin() );
        // cout << c  << " " <<  inc << " " <<  lastElement << endl;
        for( auto u : s )
        {
            if( lastElement + 1 != u)
            {
                c +=  mp[u];
            }
            else if( feq < mp[u] )
            {
                c +=  ( mp[u] -feq );
            }

            feq = mp[u];

            lastElement = u;

        }
        cout << c << endl;
    }
    return 0;
}

//Alhamdulillah

