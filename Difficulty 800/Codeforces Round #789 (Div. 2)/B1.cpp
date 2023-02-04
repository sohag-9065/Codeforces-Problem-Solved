
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,m, count = 0, ans =0,e=0,s2;
        cin >> n ;
        string str;
        cin >> str;
        for(int i=0 ; i< n ; i++)
        {
           // cout << "ans1 " << ans << " i " << i << endl;
            if(str[i] == '1')
            {
                //cout << "ans2 " << ans << " i " << i << endl;
                e=1;
                for(int k=i+1 ; k < n ; k++)
                {
                   // cout << "ans3 " << ans << " i " << i << " k "<< k<<" e " << e<<  endl;
                    if(str[k] != '1')
                    {
                       // cout << "ans4 " << ans << " i " << i << " k "<< k<<" e " << e<<  endl;
                        if(e%2!=0)
                        {
                           // cout << "ans5 " << ans << " i " << i << " k "<< k<<" e " << e<<  endl;
                            ans++;

                        }
                        i=k;
                        //cout <<  " ii1 " << i <<  endl;

                        break;
                    }
                    e++;
                }

            }
            else
            {
               // cout << "ans20 " << ans << " i " << i << endl;
                e=1;
                for(int k=i+1 ; k < n ; k++)
                {
                   // cout << "ans30 " << ans << " i " << i << " k "<< k<<" e " << e<<  endl;
                    if(str[k] != '0')
                    {
                        //cout << "ans40 " << ans << " i " << i << " k "<< k<<" e " << e<<  endl;
                        if(e%2!=0)
                        {
                           // cout << "ans50 " << ans << " i " << i << " k "<< k<<" e " << e<<  endl;
                            ans++;

                        }
                        i=k;
                        // cout <<  " ii0 " << i <<  endl;

                        break;
                    }
                    e++;
                }
            }
            cout << ans << " i " << i << endl;
        }
        //cout << ans << endl;

    }
     return 0;
}
