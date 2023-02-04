
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
        int n, x =0, y = 0;
        cin >> n;

        string s;

        cin >> s;

        bool flag = false;

        for ( auto c : s)
        {
            if( c == 'U')
            {
                y++;
            }
            else if( c == 'D')
            {
                y--;
            }
             else if( c == 'L')
            {
                x--;
            }
            else
            {
                x++;
            }

            if( x == 1 && y == 1)
            {
                flag = true;
                break;
            }

        }

        if( flag ) cout << "YES" << endl;
        else  cout << "NO" << endl;

    }
    return 0;
}

//Alhamdulillah
