
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

    // cout << log2(1) << endl;
       optimize();

    int test;

    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;

        int arr[n];

        for( int i = 0 ; i < n ; i++ )
        {
            cin >> arr[i];
        }

        int c = 0;

        int cn, pn;

        for( int i = n-1 ; i > 0  ; i-- )
        {

            cn = arr[i];
            pn = arr[i-1];

            if( arr[i] == 0 && i != 0 )
            {
                c =-1;
                break;
            }
            else if( pn >= cn)
            {
                int divValue = pn / cn;

                if( divValue % 2 == 1) divValue++;
                else divValue += 2;

                int nv = pn / divValue;

                arr[i-1] = nv;


                int pb, cb;

                if(pn == 0) pb = 0;
                else
                {

                    pb = log2(pn) + 1;
                }

                if(nv == 0) cb = 0;
                else cb = log2(nv) + 1;

                 //if(nv == 2) c++;

                c += pb - cb;

            }

        }

        cout    << c << endl;

    }
    return 0;
}

//Alhamdulillah
