
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,number,count,min,digit;
    cin >> test;
    for(int i=1; i<=test; i++)
    {
        count=1;
        cin >> number;
        min = number % 10;
        number/=10;
        while(number)
        {
            digit = number % 10;
            number/=10;
            count++;
            if(number == 0 && count == 2)
            {
                break;
            }
            if(digit<min)min=digit;
        }
         cout << min << endl;
    }
    return 0;
}
//cout << "j " << j << " first1 "<< first << " pre " << preIndex << " arr["<<j<<"] " <<arr[j] << endl;
