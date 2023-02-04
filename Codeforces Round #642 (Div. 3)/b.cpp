#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int arr[50], brr[50];

int main(void)
{
     optimize();

    int test;
    cin >> test;

    while(test--)
    {
        int n, k, sum = 0;
        cin >> n >> k;

        for(int i=0; i<n ; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        for(int i=0; i<n ; i++) cin >> brr[i];

        sort(arr, arr + n);
        sort(brr, brr + n);

        reverse(brr, brr + n);

        for(int i=0; i<k ; i++)
        {
            if(brr[i] > arr[i])
            {
                 sum += ( brr[i] - arr[i] ) ;
            }
            else break;

        }
        cout << sum << endl;
    }
    return 0;
}


