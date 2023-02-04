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

    int arr[5][5], brr[5][5], a;

    for( int i = 1; i < 4; i++ )
    {
        for( int j = 1; j < 4; j++)
        {
            cin >> a;
            arr[i][j] =  - ( a % 2 );
        }
    }

    for( int i = 1; i < 4; i++ )
    {
        for( int j = 1; j < 4; j++)
        {
            int  c = 0;

            if(   arr[i][j]  == -1  ) c++;

            if( ( i + 1 < 4 ) && ( arr[i + 1][j] == -1) ) c++;
            if( ( i - 1 > 0 ) && ( arr[i - 1][j] == -1) ) c++;

            if( ( j + 1 <4 ) && ( arr[i][j + 1] == -1) ) c++;
            if( ( j - 1 > 0 ) && ( arr[i][j - 1] == -1) ) c++;

             brr[i][j] =  1 - (c % 2) ;
        }
    }


    for( int i = 1; i < 4; i++ )
    {
        for( int j = 1; j < 4; j++)
        {
            cout << brr[i][j] ;
        }
        cout << endl;
    }

    return 0;
}

//Alhamdulillah

