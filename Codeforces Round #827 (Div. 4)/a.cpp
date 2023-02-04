
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int arr[5];
        for(int i=0; i<3 ; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 3);

         if(arr[0] + arr[1 ] == arr[2] )cout << "Yes" << endl;
         else cout << "No" << endl;


    }
    return 0;
}
