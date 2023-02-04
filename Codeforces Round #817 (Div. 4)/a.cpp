
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort ( s.begin(), s.end() );

        if(s == "Timru"  ) cout << "Yes" << endl;
       else cout << "NO" << endl;
    }
    return 0;
}
