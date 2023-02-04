#include<bits/stdc++.h>
using namespace std;
int main(void)
{

    int test;
    cin >> test;
    while(test--)
    {
        int n, a, key;
        vector<int> v;
        vector<int> temp;
        vector<int>::iterator it;
        cin >> n;
        for(int i = 1; i <= n ; i++)
        {
            cin >> a;
            v.push_back( a );
        }
        temp = v;
        sort ( temp.begin(), temp.end() );

        if( temp[0] != temp[1]   )key = temp[0];
        else key =  temp[n-1] ;

       /*  cout << " key " << key   << endl;

        for ( auto u : v ) cout << u << " ";
        cout << endl;*/

        it = find (v.begin(), v.end(), key);

        cout << (it - v.begin()) + 1   << endl;
    }
    return 0;
}


