
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
        int arr[n+5];
        int half = n / 2;

        for(int i=0; i < n ; i++)
        {
            cin >> arr[i];
        }

        if(arr[0] == arr[n-1])
        {
            cout << "NO"  << endl;
        }
        else
        {
            cout << "YES"  << endl;
            for(int i=0, j=n-1; i < half ; i++, j-- )
            {
                cout <<  arr[j] << " " << arr[i] << " " ;
            }

            if(n%2 == 1 )
            {
                cout  << arr[half]  ;
            }


             cout   << endl;
        }
    }
    return 0;
}
