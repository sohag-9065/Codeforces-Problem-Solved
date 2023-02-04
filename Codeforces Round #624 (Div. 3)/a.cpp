#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int a, b;
        cin >> a >> b;
        if(a ==  b)
        {
            cout << 0 << endl;
        }
        else if(a > b)
        {
            int difference = a-b;
            difference % 2 == 0 ? cout << 1 << endl : cout << 2 << endl;
        }
        else
        {
            int difference = b - a;
            difference % 2 == 1 ? cout << 1 << endl : cout << 2 << endl;
        }
    }
    return 0;
}
