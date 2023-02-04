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

    string s1, s2;
    cin >> s1 >> s2;

    for ( int i = 0; i < s1.size(); i++ ) s1[i] = tolower ( s1[i] );
    for ( int i = 0; i < s2.size(); i++ ) s2[i] = tolower ( s2[i] );

    if ( s1 < s2 ) cout << "-1";
    else if ( s1 > s2 ) cout << "1";
    else cout << "0";
    return 0;
}


