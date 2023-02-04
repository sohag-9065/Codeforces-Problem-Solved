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
        int n, md;
        cin >> n;

        int arr[n];

        for( int i = 0 ; i < n ; i++ )
        {
            cin >> arr[i];
        }

        int l , r, li, ri, cl=0, cr=0;;
        l = n/2;
        r = l + 1;
        if( n%2 == 1)
        {
            md = r ;
            r++;
        }

        li = l - 1;
        ri = r - 1;

        for( int i = 0; i < n/2 ; i++, li--, ri++)
        {
            //cout << "arr[li]:  " << arr[li] << " l : " << l << "  cl " << cl << "  cr "   << cr  << endl;
            if(  (arr[li] == md || arr[ri] == md ) && cl != 0 && cr != 0 )
            {
                cl = 0;
                cr =0;
                break;
            }
            if( arr[li] == l)
            {
                cl++;
                l--;
            }

            if( arr[ri] == r)
            {
                cr++;
                r++;
            }
        }

        int mop = min( cr , cl);

        cout << (n/2) - mop << endl;

    }
    return 0;
}

//Alhamdulillah

