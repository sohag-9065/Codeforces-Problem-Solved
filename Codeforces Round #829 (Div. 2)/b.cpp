#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, half, p;
        cin >>n;

        half = n / 2;
        p = half + 1;



        for(int i = 1, j = n; i <= half ; i++  , p++)
        {
            if(i == half)
            {
                cout << p << " " << i  ;
            }
            else
            {
                cout << p<< " " << i  << " " ;
            }
        }
        if(n%2 != 0) cout << " " <<  n ;
        cout << endl ;
    }

    return 0;
}
