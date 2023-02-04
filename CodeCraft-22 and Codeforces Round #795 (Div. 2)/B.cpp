#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test,numbers,odd=0,even=0,a;
    cin >> test;
    for(int i=1; i<=test; i++)
    {
        int pass=0,preIndex=0,first=1,fvalue;
        cin >> numbers;
        int arr[numbers];
        for(int p=0 ; p<numbers; p++)
        {
            cin >> arr[p];
        }
        for(int j=0; j<numbers-1; j++)
        {
            if(first==1 && arr[j] != arr[j+1])
            {
                cout << -1 << endl;
                pass = 1;
                break;
            }
            else if(first==1 && arr[j] == arr[j+1])
            {
                preIndex = j+1;
                arr[j] = j+2;
                first = 5;
            }
            else if(first == 5 && arr[j] == arr[j+1])
            {
                arr[j] = j+2;
                first = 5;
            }
            else if(first == 5 && arr[j] != arr[j+1])
            {
                if(j+1 == numbers-1)
                {
                    cout << -1 << endl;
                    pass = 1;
                    break;
                }
                arr[j] = preIndex;
                first = 1;
            }
            fvalue = preIndex;
        }
        if(numbers == 1)
        {
            cout << -1 << endl;
        }
        else if(pass == 0)
        {
            arr[numbers-1]=fvalue;
            for(int k=0 ; k<numbers; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

