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
        if( n % 4 != 0) cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int half = n/2;
            for(int i=1 , j=2 ; i <= half ; i++ , j+=2)
            {
                cout << j << " ";
            }
            for(int i=1 , j=1 ; i < half ; i++ , j+=2)
            {
                cout << j << " ";
            }
            int even_sum = half * (half +1);
            int odd_sum = (half - 1)  * (half - 1);
            cout << even_sum - odd_sum << endl;
        }
    }

    return 0;
}



