#include <bits/stdc++.h>
using namespace std;
int main( )
{
    int aliceArr[55],bobArr[55];
    int test,i,aliceCard,bobCard,ac,bc;
    cin >> test;
    for(i=1; i<=test; i++)
    {
        cin >> aliceCard;
        for( ac=0; ac<aliceCard ; ac++)
        {
            cin >> aliceArr[ac];
        }
        sort(aliceArr, aliceArr + ac);
        cin >> bobCard;
        for( bc=0; bc<bobCard ; bc++)
        {
            cin >> bobArr[bc];
        }
        sort(bobArr, bobArr + bc);
        if(aliceArr[ac-1] > bobArr[bc-1])
        {
            cout << "Alice" << endl ;
            cout << "Alice" << endl ;
        }
        else if(bobArr[bc-1] > aliceArr[ac-1])
        {
            cout << "Bob" << endl ;
            cout << "Bob" << endl ;
        }
        else
        {
            cout << "Alice" << endl ;
            cout << "Bob" << endl ;
        }


    }
    return 0;
}
