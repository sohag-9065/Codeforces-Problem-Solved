#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test,numbers,odd=0,even=0,a;
    cin >> test;
    for(int i=1; i<=test; i++)
    {
        odd=0;
        even=0;
        cin >> numbers;
        for(int j=1; j<=numbers; j++)
        {
            cin >> a;
            if(a%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even>odd){
            cout << odd << endl;
        }
        else{
            cout << even << endl;
        }
    }
    return 0;
}
