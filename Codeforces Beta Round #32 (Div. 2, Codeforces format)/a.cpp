#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int c = 0;
    string s;
    cin >> s;
    int sz = s.size();
    for( int i = 0; i < sz ; i++ )
    {
        if(s[i] == '.')
        {
            cout << c ;
            c = 0;
        }
        else  c++;

        if(c == 2)
        {
            cout << c ;
            c = 0;
        }
    }
    cout << endl;
    return 0;
}


