#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        string s, reS, ls, rs;
        cin >> s;

        copy ( s.begin()+1, s.end() - 1 , back_inserter ( reS ) );

        int  ex =  reS.find( "a" ) + 1;

        if(ex != 0)
        {
            copy ( s.begin() , s.begin() + ex  , back_inserter ( ls ) );

            copy ( s.begin() + ex + 1  ,   s.end() , back_inserter ( rs ) );

            cout << ls << " " <<  s[ex]  << " " << rs<< endl;

        }
        else
        {
             cout << s[0] << " " <<  reS  << " " << s[s.size()-1]<< endl;
        }


    }
    return 0;
}


