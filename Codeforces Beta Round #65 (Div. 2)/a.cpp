#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        int sz = s.size();
        sz < 11 ? cout << s << endl : cout << s[0] << sz-2 << s[sz-1]<< endl;
    }

    return 0;
}
