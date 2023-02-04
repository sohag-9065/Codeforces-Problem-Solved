#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, sum=0;
        cin >> n;
        int arr[n];
        for(int i=0 ; i< n ; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }

        sort(arr , arr +n);
         cout << (sum - (arr[0]*n)) << endl ;


    }
    return 0;
}
