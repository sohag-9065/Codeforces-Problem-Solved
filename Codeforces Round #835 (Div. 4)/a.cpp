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
        int a,b,c;
        cin >> a >> b >> c;
        if(a > b && a < c || a > c && a < b)cout << a << endl;
        else if(b > a && b < c || b > c && b < a)cout << b << endl;
        else cout << c << endl;
    }
}
