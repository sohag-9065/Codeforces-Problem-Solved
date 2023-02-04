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


bool isVowel ( char c )
{
    return ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
}

int main()
{
    optimize();

    vector<string> v;
    int cnt[] = { 5, 7, 5 };

    for ( int i = 0; i < 3; i++ ) {
        string s;
        char c;
        cin >> c;
        getline ( cin, s );
        s = c + s;

        v.push_back ( s );
    }

    for ( int i = 0; i < 3; i++ ) {
        int c = 0;

        for ( auto u : v[i] ) {
            if ( isVowel(u) ) c++;
        }

        if ( c != cnt[i] ) return cout << "NO\n", 0;
    }

    cout << "YES\n";
    return 0;
}


