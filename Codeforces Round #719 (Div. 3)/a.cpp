
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
        int  f = 0;
        for (int i = 0; i<n -1; i++ )
        {
            if(s[i] != s[i+1])
            {
                for(int j = i+2 ; j<n; j++ )
                {
                    if(s[i] == s[j])
                    {
                        cout << "No" << endl;
                        f = 1;
                        break;
                    }
                }
            }
            if(f == 1) break;
        }
        if(f == 0) cout << "YES" << endl;
    }
    return 0;
}

