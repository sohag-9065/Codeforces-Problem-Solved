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
        int n, a;
        cin >> n;

        int arr[n+5], brr[n+5], crr[n+5], permutation[n+5];

        for ( int i = 1; i < n ;i++ ) cin >> arr[i];

        for ( int i = 1; i < n ;i++ ) cin >> brr[i];

        for ( int i = 1; i < n ;i++ ) cin >> crr[i];

        int remainInput = (n * ( n-1 )) - ( ( n-1 ) * 3);

        for ( int i = 1; i <= remainInput ;i++ ) cin >> a;


        for ( int i = 1; i < n ;i++ )
        {
            if( arr[i] != brr[i] || arr[i] != crr[i] )
            {
                if( arr[i] == brr[i] )
                {
                    permutation[i] = arr[i];
                    for(  ; i < n; i++)
                    {
                        permutation[i + 1] = crr[i];
                    }
                }
                else if( arr[i] == crr[i] )
                {
                    permutation[i] = arr[i];
                    for(  ; i < n; i++)
                    {
                        permutation[i + 1] = brr[i];
                    }
                }
                else
                {
                    permutation[i] = brr[i];
                    for(  ; i < n; i++)
                    {
                        permutation[i + 1] = arr[i];
                    }
                }
            }
            else permutation[i] = arr[i];
        }

        int i;

        for ( i = 1; i < n ;i++ ) cout << permutation[i] << " ";
        cout << permutation[i] << endl;

    }
    return 0;
}

//Alhamdulillah

