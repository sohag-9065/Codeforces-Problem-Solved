
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
        int n;
        cin >> n;

        int arr[n];

        string s, ls, rs;

        cin >> s;

        int min_value = 0;


        for( int i = 1, j = 0; i< n ; i++)
        {

            string ls= "", r= "";


            copy ( s.begin(), s.begin()+i, back_inserter ( ls ) );
            copy ( s.begin()+i, s.end(), back_inserter ( rs ) );


            sort ( ls.begin(), ls.end() );
            int ls_Sz = unique( ls.begin(), ls.end() ) - ls.begin();

            sort ( rs.begin(), rs.end() );
            int rs_Sz = unique( rs.begin(), rs.end() ) - rs.begin();


            // cout << ls << " " << ls_Sz <<  " "  << rs << " " << rs_Sz  << endl;


            if( min_value < ls_Sz + rs_Sz) min_value = ls_Sz + rs_Sz;

            ls= "";
            rs= "";

        }



        cout << min_value << endl;




    }
    return 0;
}

//Alhamdulillah

