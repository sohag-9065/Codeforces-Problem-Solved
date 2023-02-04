#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n ,  t , ps = 0, tt=0, max_time = 240 ;
    cin >> n >> t;
    for(int i =1 ; i <= n ; i++)
    {
        tt += i*5;
        max_time  = 240 - tt;

       // cout << " ps "  << ps  << " max_time " << max_time << " tt  " << tt << endl;
        if(t > max_time)
        {
            break;
        }
        ps++;

    }
   cout << ps << endl;

   return 0;
}
