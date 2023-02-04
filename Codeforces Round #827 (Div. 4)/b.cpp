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
        int arr[200];
        for(int i=0; i<n ; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int f = 1;
        for (int i = 1; i<n; i++)
        {
            if (arr[i] == arr[i-1])
            {
                f = 0;
                cout << "No" << endl;
                break;
            }

        }
        if(f == 1)
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
