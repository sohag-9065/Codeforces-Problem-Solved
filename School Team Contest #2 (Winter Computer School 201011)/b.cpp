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
    vector<int> nums = {12, 9, 10, 13, 1, 8, 11} ;

    map<int, int> cnt;


    for(int i = 0 ; i < nums.size() ; i++)
    {
        for(int j = i + 1 ; j < nums.size() ; j++)
        {
            //  if(nums[i] > nums[j]) cnt[nums[i] - nums[j]]++;
            // else cnt[nums[j] - nums[i]]++;

        }
    }


    for(auto u : cnt)
    {
        cout << u.first << " " << u.second << endl;
    }

    cout <<   " vvvvvvvvvvv "   << endl;

    return 0;
}

//Alhamdulillah

