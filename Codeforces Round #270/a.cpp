
#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{

    int i;
    if(n < 2)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }
    for( i = 3; i*i <=n ; i += 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;

}

int main(void)
{
    int n;
    cin >> n ;
    int l, r, half;
    half = n/2;
    l = half;
    r = half;
    if(n % 2 != 0) r++;

    while(half--)
    {
        if(prime(l) || prime(r) )
        {
            l--;
            r++;
        }
        else
        {
            cout << l << " " << r << endl;
            break;
        }
    }
    return 0;
}

