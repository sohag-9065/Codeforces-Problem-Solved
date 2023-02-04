#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define endl '\n'

int main(void)
{
    optimize();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        string s;

        cin >> n >> s;
        sort ( s.begin(), s.end() );
        cout << ((int)s[s.size()-1]) - 96 << endl;
    }
}
