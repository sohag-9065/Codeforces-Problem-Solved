#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    int arr[50];
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        for(int i=0; i<n ; i++)
        {
            cin >> arr[i] ;
        }

        int odd = 0, even = 0, postion = 0;

        for(int i=0; i<n ; i++)
        {
           if(arr[i] % 2 == 1 )
           {
               odd++;
               if( i % 2 == 0) postion++;
           }
        }

        if( odd == n/2) cout  << postion << endl;
        else cout << -1 << endl;
    }
    return 0;
}

