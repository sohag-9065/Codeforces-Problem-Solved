
#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define endl '\n'



int main(void)
{
    optimize();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int arr[n], brr[n];
        for(int i=0; i < n ; i++)
        {
            cin >> arr[i];
            brr[i]=arr[i];
        }

        sort(brr, brr + n);
        for(int i=0; i < n -1 ; i++)
        {
            if(brr[n-1] != arr[i])
            {
                cout <<  arr[i] - brr[n-1] << " " ;
            }
            else
            {
                cout << brr[n-1] -  brr[n-2] << " ";
            }
        }
        if(brr[n-1] != arr[n-1])
        {
            cout <<  arr[n-1] - brr[n-1] << " " ;
        }
        else
        {
            cout << brr[n-1] -  brr[n-2] << " ";
        }
        cout << endl;


    }
}
