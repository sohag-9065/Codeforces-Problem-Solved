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
        string s1, s2;
        cin >> s1 >> s2;
        int f = 1;
        for(int i=0; i<n ; i++)
        {
            if(( s1[i] != s2[i] ) && ( s1[i] == 'R' ||  s2[i] == 'R'))
               {
                   cout << "NO" << endl;
                   f=0;
                   break;
               }
        }
        if(f == 1)
        {
             cout << "YES" << endl;
        }

    }
    return 0;
}


