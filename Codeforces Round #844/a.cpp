
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
        int w, d , h;
        cin >> w >> d >> h;
        int x1 , y1, x2 ,y2;
        cin >> x1>> y1 >> x2 >> y2;

        if( x1 < x2) swap(x1, x2);
        if( y1 < y2) swap(y1, y2);

        //cout << x1  <<  " " << x2 << " " << y1 << " "  << y2  << endl;

        int minX = min( x2 , ( w - x1 ) ) ;
        int minY =  min( y2 , ( d - y1) ) ;

        int mind = min( minX , minY );

        int dx =  x1 - x2 ;
        int dy = y1 - y2 ;
//cout << dx  <<  " " << dy    << " "  << mind  << endl;

        int ans = dx + dy + ( mind *2) + h;

        cout << ans << endl;



    }
    return 0;
}

//Alhamdulillah
