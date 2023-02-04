#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int first_digit = s[0] - '0' ;
    for(int i= 0 ; i<s.size() ; i++)
    {
        int c = s[i] - '0' ;

        if(c>4)
        {
            c = 9 - c;
            s[i] = '0' + c;
        }


    }
    if(s[0] == '0')s[0] = '0' + first_digit;

    cout << s << endl;
    return 0;
}
