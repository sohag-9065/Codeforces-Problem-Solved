
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
ll gcd( ll a, ll b ) { return __gcd( a, b ); }
ll lcm( ll a, ll b ) { return a * (b / gcd(a, b)); }

int main()
{
    optimize();

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int sz = n * k;
        int A[sz];

        for(int i=1; i<=sz; i++){
            cin >> A[i];
        }

        if(n%2 == 0){
            int ans = 0, sp = sz-(n/2), diff = (n/2)+1;
            for(int i=sp, j=1; j <= k;j++, i -= diff){
                //cout << j << " " << i << endl;
                 ans += A[i];
            }
            cout << ans << endl;
        }else{
            int ans = 0, sp = sz-n+2, diff = n-1;
            for(int i=sp; i>n; i -= diff){
                ans += A[i];
            }
            cout << ans << endl;
        }

    }

    return 0;
}
