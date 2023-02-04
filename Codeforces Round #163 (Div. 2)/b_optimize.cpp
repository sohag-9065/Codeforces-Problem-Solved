#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, t, b = 0 ;
    string s;
    cin >> n >> t >> s;
    reverse( s.begin(), s.end() );
    // cout << s << endl;
    for(int i = 1; i < n; i++)
    {
        //cout << s << endl;
        //cout << s[i] << " i  " << i << endl;
        if(s[i] == 'B'  && s[i-1] == 'G' )
        {
            if( i-b < t )
            {
                // cout << "ttt : " << s << " i  " << i  << " s[i] " << s[i] << " b " << b << endl;
                char ch = s[i];
                s[i] = s[b];
                s[b] = ch;
                b = b+1;
            }
            else
            {
                if(s[i-1] == 'G')
                {
                    char ch = s[i-1];
                    s[i-1] = s[i];
                    s[i] = ch;
                    b = i;
                }
                else
                {
                    //  cout << "sss : " <<  s[i]  << " s[i] " << s[i] << " b " << b  << endl;
                    char ch = s[i-t];
                    s[i-t] = s[i];
                    s[i] = ch;

                    b = i-t + 1;
                }

            }
        }
    }
    reverse( s.begin(), s.end() );
    cout << s << endl;

    return 0;
}

//6 2
//BBGBBG
