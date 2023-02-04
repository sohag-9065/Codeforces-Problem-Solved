#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,y,z,g,p,b;
    int required_grape, availabel_grape;
    cin >> x >> y >> z >> g >> p >> b;

    required_grape = x + y + z;
    availabel_grape = g + p + b;

    if( required_grape >  availabel_grape || x > g || x+y > g+p   )
    {
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;

    return 0;

}
