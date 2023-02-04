// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(void)
{
    optimize();

    set<int> s;
    int n;
    cin >> n;


    for ( int i = 0; i < n; i++ )
    {
        int a;
        cin >> a;
        s.insert ( a );
    }

    s.erase ( s.begin() );

    if(s.size() > 0 ) cout << *s.begin() << endl;
    else cout << "NO" << endl;
    return 0;
}

//Alhamdulillah
