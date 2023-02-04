#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

#define pi                  acos(-1)
#define vi                  vector<int>
#define blank               cout << endl
#define len(v)              (int)v.size()
#define ifor(n)             for(int i=0;i<n;i++)
#define all(var)            var.begin(),var.end()

template<typename T>        void out(T arg){cout << arg;}
template<typename T>        void in(vector<T> &v){ifor(len(v)) cin >> v[i];}
template<typename ...Args>  void in(Args& ... args){(cin >> ... >> args);}
template<typename T>        void out(vector<T> v, char c){for(auto x:v) cout << x << c;}
template<typename T>        T FromString(string s) {stringstream ss;ss << s;T res;ss >> res;return res;}

#define FIO                 ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

/***************************************************Debug***********************************************************/
void _Print(int a){cerr<<a;}
void _Print(lli a){cerr<<a;}
void _Print(double a){cerr<<a;}
void _Print(char a){cerr << '\'' << a <<'\'';}
void _Print(const char *a){cerr << '\"' << a <<'\"';}
void _Print(const string &a){cerr << '\"' << a <<'\"';}
void _Print(bool a){cerr << (a ? "true" : "false");}

template<typename T, typename V>
void _Print(const pair<T, V> &x) {cerr << '{'; _Print(x.first); cerr << ','; _Print(x.second); cerr << '}';}

template<typename T>
void _Print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), _Print(i); cerr << "}";}

void Print() {cerr << "]\n";}

template <typename T, typename... V>
void Print(T t, V... v) {_Print(t); if (sizeof...(v)) cerr << ", ";Print(v...);}

#ifndef OJ
#define debug(a...) cerr << "[" << #a << "] = ["; Print(a)
#else
#define debug(a...)
#endif
/*******************************************************************************************************************/


int main()
{
    FIO;

    int t;
    in(t);
    while(t--)
    {
        int n;
        in(n);
        map<int,int> mp;
        while(n--)
        {
            int num;
            in(num);
            mp[num]++;
        }
        int ans=-1;
        for(auto it:mp)
        {
            if(it.second > 2)
            {
                ans = it.first;
                break;
            }
        }
        out(ans);blank;
    }
    return 0;
}
