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
        int n;
        cin >> n;
        ll A[n];
        for(int i=0; i<n; i++){
            cin >> A[i];
        }

        int cnt = 0, flag = 0;

        for(int i=n-2; i>=0; i--){
            while(A[i] >= A[i+1] && A[i] > 0){
                int x = A[i] / 2;
                A[i] = x;
                cnt++;
            }
            if(A[i] == A[i+1]){
                flag = 1;
                break;
            }
        }

        if(flag){
            cout << -1 << endl;
        }else{
            cout << cnt << endl;
        }
    }

    return 0;
}
