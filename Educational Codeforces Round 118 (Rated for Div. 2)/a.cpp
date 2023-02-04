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
        int x1, p1, x2, p2;

        string s1, s2, s3 = "", s4 = "";
        cin >> s1 >> p1 >> s2 >> p2;

        int s1_len = s1.size();
        int s2_len = s2.size();




        if( (s1_len + p1) > (s2_len + p2) ) cout << ">" << endl;
        else if ( (s1_len + p1) < (s2_len + p2) ) cout << "<" << endl;
        else if ( s1 ==  s2 ) cout << "=" << endl;
        else
        {
            if( s1_len > s2_len )
            {
                copy ( s1.begin(), s1.begin()+s2_len, back_inserter ( s4 ) );


                if( s2 < s4 ) cout << ">" << endl;
                else if( s2 > s4 ) cout << "<" << endl;
                else
                {
                    bool flag = true;
                    copy ( s1.begin()+s2_len, s1.end(), back_inserter ( s3 ) );
                    for ( auto c : s3 )
                    {
                        if( c != '0')
                        {
                            flag = false;
                            cout << ">" << endl;
                            break;
                        }
                    }
                    if(flag)cout << "=" << endl;
                }

            }
            else
            {
                copy ( s2.begin(), s2.begin()+s1_len, back_inserter ( s4 ) );

                if( s1 < s4 ) cout << "<" << endl;
                else if( s1 > s4 ) cout << ">" << endl;
                else
                {
                    bool flag = true;
                    copy ( s2.begin()+s1_len, s2.end(), back_inserter ( s3 ) );
                    for ( auto c : s3 )
                    {
                        if( c != '0')
                        {
                            flag = false;
                            cout << "<" << endl;
                            break;
                        }
                    }
                    if(flag)cout << "=" << endl;
                }


            }


        }

    }
    return 0;
}

//Alhamdulillah

