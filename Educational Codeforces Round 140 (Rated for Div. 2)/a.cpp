#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int x1,y1, x2,y2, x3,y3;
        bool flag = false;
        cin >> x1 >> y1 >>  x2 >> y2 >> x3 >> y3;
        if(x1 == x2)
        {
            if(y1 == y3 || y2 == y3  )
            {
                cout << "NO" << endl;
                 flag = true;
            }
        }
        else  if(x1 == x3)
        {
            if(y1 == y2 || y2 == y3)
            {
                cout << "NO" << endl;
                flag = true;
            }
        }
        else  if(x2 == x3)
        {
            if(y1 == y2 || y1 == y3)
            {
                cout << "NO" << endl;
                flag = true;
            }
        }


        if(!flag)
        {
            cout << "YES" << endl;
        }

    }
    return 0;
}


