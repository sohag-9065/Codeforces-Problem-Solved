#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i=0; i<n ; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    int team = 0, members = 0;
    for(int i=0; i<n ; i++)
    {

        //cout << "5 - arr[i] " << 5 - arr[i] << " team " << team << " members " << members<< endl;
        if(5 - arr[i] < k)break;

        members++;

    }
    cout << members / 3 << endl;
    return 0;

}
