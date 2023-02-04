#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, extremely_round = 0;
        cin >> n;

        while(n/10)
        {
            extremely_round +=  9;
            n /= 10;
        }
        extremely_round +=  n;

        cout << extremely_round << endl;

    }
    return 0;
}


