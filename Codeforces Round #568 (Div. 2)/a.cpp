#include<bits/stdc++.h>
using namespace std;


int main(void)
{
    int a, b, c, d, minimum_duration=0, temp ;

    cin >> a >> b >> c >> d;





    if( a >=  b && a >= c   )
    {
        if( c > b )
        {
            temp = b ;
            b = c;
            c = temp;
        }
    }
    else if(   b >= a  && b >= c)
    {
        temp = a ;
        a = b;
        b = temp;
        if( c > b )
        {
            temp = b ;
            b = c;
            c = temp;
        }
    }
    else
    {

        temp = a ;
        a = c;
        c = temp;

        if( c > b )
        {
            temp = b ;
            b = c;
            c = temp;
        }
    }

    if( (a-b) < d ) minimum_duration = d - (a-b);

    if( (b-c) < d ) minimum_duration += d - (b-c);

    cout << minimum_duration << endl;
    return 0;
}
