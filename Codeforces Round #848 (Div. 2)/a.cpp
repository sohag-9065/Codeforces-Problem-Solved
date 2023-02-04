
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
const int inf = 2e9;
const ll infLL = 2e18;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define mem(a, b) memset(a, b, sizeof(a))
ll gcd( ll a, ll b )
{
    return __gcd( a, b );
}
ll lcm( ll a, ll b )
{
    return a * (b / gcd(a, b));
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;



        int sum = 0;

        int a;
        cin >> a;

        sum = a;
        int ind1 = 0, ind2 = 0, last;

        for( int i =2 ; i <= n; i++)
        {
            int b;
            cin >> b;

            sum += b;

            if( a == -1 && b == -1 )
            {
                ind2 = 1;
            }

            if(   a == -1 )
            {
                ind1 = 1;
            }

            a = b;
            last = b;
        }

        if( ind2 == 1 )
        {
            cout << sum + 4  << endl;
        }
        else if( ind1 == 1 )
        {
            cout << sum   << endl;
        }
        else if ( last == -1  )
        {
             cout << sum   << endl;

        }
        else
        {
            cout << sum - 4 << endl;
        }

    }
    return 0;
}
