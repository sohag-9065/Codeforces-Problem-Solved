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

        int ls = 0, rs = 0, ind = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == 'L' && rs != 0)
            {
                ls = 1;
            }
            else if(s[i] == 'R' && rs == 0)
            {
                rs = 1;
                ind = i-1;
            }
        }

        if(rs == 1 && ls == 1)
        {
            cout << 0 << endl;
        }
        else if( n > 1 && rs == 1 && s[ind] == 'L'  )
        {
             cout << ind + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }

    }
    return 0;
}

