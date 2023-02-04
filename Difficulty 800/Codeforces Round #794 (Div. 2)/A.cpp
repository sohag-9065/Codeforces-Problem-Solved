#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int test;
    cin >> test ;
    while(test--)
    {
        int n , sum = 0;
        cin >> n;
        int arr[n];
        bool flag = false;
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        for(int j=0 ; j<n ; j++)
        {
            if((sum - arr[j]) % (n-1) == 0)
            {
                if((sum - arr[j]) / (n-1) == arr[j])
                {
                    flag = true;
                    break;
                }
            }
        }
        if(flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
