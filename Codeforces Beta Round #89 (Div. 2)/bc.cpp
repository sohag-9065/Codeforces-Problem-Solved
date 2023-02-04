

#include <bits/stdc++.h>
using namespace std;



int main(void)
{
    int t;
    string sp;
    cin >> t;

    while(t--)
    {
        int cou=0;
        int lp ;
        cin >> lp;
        cin >> sp;

        int n = sp.size();

        for (int len = 1; len <= n; len++)
        {
            for (int i = 0; i <= n - len; i++)
            {
                int j = i + len - 1;
                string s="";
                for (int k = i; k <= j; k++)
                {
                    s +=   sp[k];
                }

                int p= 1;
                int len = s.size();

                sort ( s.begin(), s.end() );
                string temp = s;
                //cout << "s_temp: " << s << " len: " << len << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;
                int n = unique( temp.begin(), temp.end() ) - temp.begin();

                s.erase ( remove ( s.begin(), s.end(), '0' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_0: " << s  << " len: " << len << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                s.erase ( remove ( s.begin(), s.end(), '1' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_1: " << s  << " len: " << len << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                s.erase ( remove ( s.begin(), s.end(), '2' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_2: " << s  << " len: " << len << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                s.erase ( remove ( s.begin(), s.end(), '3' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_3: " << s << " len: " << len  << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                s.erase ( remove ( s.begin(), s.end(), '4' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_4: " << s  << " len: " << len << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                s.erase ( remove ( s.begin(), s.end(), '5' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_5: " << s << " len: " << len  << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                s.erase ( remove ( s.begin(), s.end(), '6' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_6: " << s  << " len: " << len << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                s.erase ( remove ( s.begin(), s.end(), '7' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_7: " << s  << " len: " << len << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                s.erase ( remove ( s.begin(), s.end(), '8' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_8: " << s  << " len: " << len << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                s.erase ( remove ( s.begin(), s.end(), '9' ), s.end() );
                if(p < len - s.size()) p = len - s.size();
                len = s.size();
                //cout << "s_9: " << s  << " len: " << len << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

                if(p>n)
                {
                    cou++;
                }
                //cout << "temp: " << temp << " len: " << len  << " p: " << p << " n: " <<   n << " cou: " <<   cou<< endl;

            }
        }
        int lem = sp.size();
        int subto = ((lem*(lem+1))/2);
       // cout << "out: " << subto- cou << " lem: " << lem  << " subto: " << subto  << " cou: " <<   cou<< endl;
        cout << subto- cou << endl;



    }



    return 0;
}
