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
        int n, sum = 9, c = 8;
        string s = "9";
        cin >> n;



        if( n < 10)
        {
            cout << n << endl;
        }
        else
        {
            while( sum != n)
            {
                if( (sum + c ) <= n )
                {
                    sum += c;//17 20
                    s += (c + '0' ); //983
                }

                c--;//765432

            }
            reverse( s.begin(), s.end() );
            int ans = stoi(s);
            cout << ans   << endl;
        }





    }
    return 0;
}


