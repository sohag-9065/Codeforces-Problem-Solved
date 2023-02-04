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

    int test;
    cin >> test;

    while(test--)
    {
        int n , pos, neg;
        cin >> n;

        neg = n/2;
        pos = neg - 1;
        if( n % 2 == 0) pos = neg;

        if(n  == 3) cout << "NO" << endl;
        else
        {

            cout << "YES" << endl;
            cout << pos  << " " << -neg ;
            for( int i = 1; i <= ((  n/2 ) - 1 ); i++)
            {
                cout << " " << pos  << " " << -neg  ;
            }

            if( n % 2 == 1) cout << " " << pos ;


            cout   << endl;
        }

    }
    return 0;
}

//Alhamdulillah

