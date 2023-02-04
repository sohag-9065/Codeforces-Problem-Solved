
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
        ll n, a;
        cin >> n;

        map<ll, ll > mp;

        for(ll i =0; i<n ; i++ )
        {

            cin >> a;
            mp[a]++;
        }


        map<ll, ll  >::iterator l, r  ;

        l =  mp.begin() ;
        r = --mp.end() ;



        if( l->first  ==  r->first) cout <<   l->second  * ( l->second - 1 )  << endl;
        else cout <<   l->second * r->second * 2  << endl;


    }
    return 0;
}

//Alhamdulillah

