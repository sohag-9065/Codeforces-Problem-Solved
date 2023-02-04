
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
        int n, h, m, sleep;
        cin >> n >> h >> m;

        sleep = ( h * 60 ) + m ;

        int arr[20];

        for(int i = 0 ; i < n ; i++ )
        {
            int ah, am;
            cin >> ah >> am;
            arr[i] = ( ah * 60 ) + am ;
        }

        sort( arr, arr + n );

        if( sleep <= arr[n-1] )
        {
            for(int i = 0 ;  i < n ; i++)
            {
                if(arr[i] >= sleep)
                {
                    int sh, sm;
                    int total_minute =   arr[i] - sleep ;
                    sh = total_minute / 60 ;
                    sm = total_minute % 60 ;
                    cout << sh << " " << sm << endl;
                    break;
                }
            }
        }
        else
        {
            int t = arr[0] + 1440 ;
            int sh, sm;
            int total_minute =   t - sleep ;
            sh = total_minute / 60 ;
            sm = total_minute % 60 ;
            if(sh == 24 ) sh = 0;
            cout << sh << " " << sm << endl;
        }

    }
    return 0;
}

