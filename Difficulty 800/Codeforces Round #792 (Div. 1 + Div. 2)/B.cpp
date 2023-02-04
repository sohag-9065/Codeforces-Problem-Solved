
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,x,y,z;
    cin >> test;
    for(int i=1; i<=test; i++)
    {
        cin >> a >> b >> c;
        z = c;
        y = z+b;
        x = y+a;
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
