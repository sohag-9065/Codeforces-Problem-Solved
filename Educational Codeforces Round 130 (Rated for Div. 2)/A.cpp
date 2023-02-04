
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,sum = 0;
        cin >> n >> m;
        int arr[n+5];
        for (int i=0; i<n ; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        if(sum > m)
        {
            cout << sum-m << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
