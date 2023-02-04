
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
        int arr[n];
        for(int i=0; i<n ; i++)cin >> arr[i];

        int mx = 0, mn = 999999, or_result, and_result, max_result = 0;

        for(int i=0; i < n - 1 ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {

                or_result = arr[i] | arr[j];
                and_result = arr[i] & arr[j];

                mx = max( mx, or_result );
                mn = min( mn, and_result);


                if( arr[i] > arr[j])
                {
                    arr[i] = or_result;
                    arr[j] = and_result;
                }
                else
                {
                    arr[i] = and_result;
                    arr[j] = or_result;
                }
            }
        }
        cout << mx - mn << endl;

    }
    return 0;
}

