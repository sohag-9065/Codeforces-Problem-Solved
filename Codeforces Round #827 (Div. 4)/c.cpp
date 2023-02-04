
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
    char ch;

    while(test--)
    {
        string r[10], c[10];

        for(int i = 0; i<8 ; i++)
        {
            cin >> r[i];
        }

        for(int i = 0; i<8 ; i++)
        {
            for(int j = 0; j< 8 ; j++)
            {
                c[i] += r[j][i];
            }
        }

        int f = 1;

        for(int i = 0; i<8 ; i++)
        {
            f = 1;
            for(int j = 0; j< 7 ; j++)
            {
                if(c[i][j] != c[i][j+1] )...............
                {
                    f = 0 ;
                    break;
                }
            }
            if(f == 1 && c[i][5] != '.')
            {
                ch = c[i][5];
                cout <<  c[i][5] << endl;
                break;
            }
        }

        if( f == 0)
        {
            for(int i = 0; i<8 ; i++)
            {
                f = 1;
                for(int j = 0; j< 7 ; j++)
                {
                    if(r[i][j] != r[i][j+1] )
                    {
                        f = 0 ;
                        break;
                    }
                }
                if(f == 1 && r[i][5] != '.')
                {
                    cout <<  r[i][5] << endl;
                    f = 0 ;
                    break;
                }
            }

        }


    }
    return 0;
}

