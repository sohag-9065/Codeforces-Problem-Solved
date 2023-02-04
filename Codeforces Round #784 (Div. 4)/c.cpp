#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, q;
    cin >> n  >> q ;
    int arr[n+5]  ;
    int sum[n+5];
    sum[0] = 0;

    for(int i=1; i <= n ; i++)
    {
        cin >> arr[i];
    }

    for(int i=1; i <= n ; i++)
    {
        sum[i] = arr[i] ^ sum[i-1];
    }


    while(q--)
    {
        int a, b;
        cin >> a >> b;

        int ans = sum[a-1] ^ sum[b];
        cout << ans << endl;
    }
    return 0;
}


