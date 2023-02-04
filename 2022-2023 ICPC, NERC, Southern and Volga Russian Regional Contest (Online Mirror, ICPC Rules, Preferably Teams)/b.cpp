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
    //optimize();

    int test;
    cin >> test;

    while(test--)
    {
        int n, f = 0;
        cin >> n;
        string s;
        cin >> s;


        if( n % 3 == 2)
        {
            cout << "NO" << endl;
             f = 1;
        }
        else
        {
            for(int i = 1 ; i < n ; i+=3)
            {
                if( s[i] != s[i+1] )
                {
                    cout << "NO" << endl;
                    f = 1;
                    break ;

                }
            }
        }


        if(f != 1)cout << "YES" << endl;
    }

    return 0;
}


