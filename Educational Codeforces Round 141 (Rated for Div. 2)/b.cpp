
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


             cout  << arr[n-1] << " "  ;

            for(int i=0 ; i < n-1 ; i++  )
            {
                cout     << arr[i] << " " ;
            }
            cout   << endl;
        }
    }
    return 0;
}
