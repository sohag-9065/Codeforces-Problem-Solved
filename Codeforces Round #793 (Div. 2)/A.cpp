#include <iostream>
using namespace std;
int main( )
{



    int test,i,j,loopTime,result=1,p,slen,a;
    string s;
    cin >> test;
    for(i=1; i<=test; i++)
    {
        result=1;
        cin >> a;
        cin >> s;
        slen=s.length();
        if(slen==2)
        {
            cout << 2 << endl;
        }
        else
        {

            if(slen%2==1)
            {

                p=(slen/2);
                for(j=(slen/2)-1; j>=0; j--)
                {
                    //cout << "slen " <<  slen << " s " << s  << " p " << p << " j "<< j << " result " << result<< endl;
                    if(s[j]==s[p])
                    {
                       // cout << " true " << " p " << p << " j "<< j << endl;
                       // cout << j << " b " << result << " "  << p << endl;
                        result+=2;
                        if(j==0)
                        {
                            cout << result << endl;
                            break;
                        }
                        //cout << result << endl;
                        //cout << "a" << result << endl;
                    }
                    else
                    {
                        cout << result << endl;
                        break;
                    }
                }
            }
            else
            {
                 p=(slen/2)-1;
                 result++;
                for(j=(slen/2)-2; j>=0; j--)
                {
                    if(s[j]==s[p])
                    {
                        //cout << j << " b " << result << " "  << p << endl;
                        result+=2;
                        if(j==0)
                        {
                            cout << result << endl;
                            break;
                        }
                        //cout << result << endl;
                        //cout << "a" << result << endl;
                    }
                    else
                    {
                        cout << result << endl;
                        break;
                    }
                }
            }
        }
    }
}
