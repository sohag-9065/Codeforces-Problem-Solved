
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,a,first,second,third;
        cin >> n ;
        if( (n %3 == 2) || (n %3 == 1) )first = (n/3)+2;
        else {
            first = (n/3)+1;
        }




        a =  ( n - first)  ;
        second =   (a/2)+1;;
        third = a - second;
        cout <<  second << " " << first << " " <<  third << endl;
    }

}

