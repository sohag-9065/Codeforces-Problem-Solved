// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
const int inf = 2e9;
const ll infLL = 2e18;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
ll gcd( ll a, ll b )
{
    return __gcd( a, b );
}
ll lcm( ll a, ll b )
{
    return a * (b / gcd(a, b));
}

int check[5000];

int main()
{
     optimize();

    int t;
    cin >> t;

    set<int > s;

    while(t--)
    {
        int n,m, a, sum1= 0, sum2 = 0;
        cin >> n >> m;
        int A[10500] = {0}, mx =  1;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            A[a] = 1;
           // s.insert(a);
            sum1 += a;

            mx = max(mx, a);
        }
       /* cout << endl;

        cout << " sum1 " << sum1 << endl ;


         for(auto u : s) cout << u << " ";
        cout << endl;*/

        /*for(int i=0; i<51; i++)
         {
             cout << i <<  ' ' << A[i] << endl;
         }*/

        int ans = 0, flag = 0, c = 0;
        for(int i=1;  ; i++)
        {   if( ans > m ) break;
            if(A[i] == 0)
            {
                c++;
                mx = max(mx, i );

                ans +=   i  ;


                sum2 += i;
                //cout << " max "<< mx   <<  " ans " << ans << " i " << i+1  << endl;
                 if(ans == m )
                {
                    flag = 1;
                    break;
                }
            }
        }



       // cout << "Flag " << flag << " ans" << ans<< " max "<< mx <<  "  n  " <<   n  << " c " << c   << endl;
        if(flag && mx  == (n + c))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}

//Alhamdulillah

