
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test, m=0, c=0, a, b;
    cin >> test;
    while(test--)
    {
        cin >> a >> b;
        if(a > b) m++;
        else if(b > a)c++;
    }
    if( m == c )
    {
        cout << "Friendship is magic!^^";
    }
    else if(m > c)
    {
        cout << "Mishka";
    }
    else
    {
        cout << "Chris";
    }
    cout << " " << m << " " << c << endl;
    return 0;
}

