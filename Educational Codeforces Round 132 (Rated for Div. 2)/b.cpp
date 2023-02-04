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

    int n,m;
    cin >> n >> m;

    ll A[n+123];
    for(int i=1; i<=n; i++){
        cin >> A[i];
    }

        const int mx = 1e5+100;
        ll lr[mx] = {0}, rl[mx]={0};

            for(int i=2; i<=n; i++){
                if(A[i] < A[i-1]){
                    lr[i] = A[i-1] - A[i];
                }
            }
            for(int i=1; i<=n; i++){
                lr[i] = lr[i] + lr[i-1];
            }

            for(int i=2; i<=n; i++){
                if(A[i] > A[i-1]){
                    rl[i] = A[i] - A[i-1];
                }
            }
            for(int i=1; i<=n; i++){
                rl[i] = rl[i] + rl[i-1];
            }


    while(m--)
    {
        int s,t;
        cin >> s >> t;

        if(s < t){
            cout << lr[t] - lr[s] << endl;
        }else{
            cout << rl[s] - rl[t] << endl;
        }

    }

    return 0;
}
