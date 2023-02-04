#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        string str;
        cin >> str;
        int f3 , l3;
        f3 = str[0]+str[1]+str[2];
        l3 = str[3]+str[4]+str[5];

       // printf((f3==l3) ? "YES\n" : "NO\n");
         cout << ((f3==l3) ? "YES\n" : "NO\n") ;
        //if(f3==l3) cout << "yes" <<  endl;
        //else cout << "no" <<  endl;

    }
    return 0;
}
