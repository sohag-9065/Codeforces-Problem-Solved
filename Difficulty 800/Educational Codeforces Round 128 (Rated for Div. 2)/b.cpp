
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,r,c,first,firstIndexR;
    string str[6];
    cin >> test ;
    for(int i=1 ; i<=test ; i++)
    {
        first =1;
        firstIndexR =10;
        cin >> r >> c;
        for(int j=0 ; j<r ; j++)
        {
            cin >> str[j] ;
        }
         for(int j=0 ; j<r ; j++)
         {
             for(int k=0; k<c ; k++)
             {
                 if(str[j][k] == 'R' && first == 1)
                 {
                     firstIndexR = k;
                     first = 2;
                 }
                 else if(str[j][k] == 'R' && firstIndexR > k)
                 {
                    first = 5;
                 }
             }
         }
         if(first == 2)
         {
             cout << "YES" << endl;
         }
         else
         {
             cout << "NO" << endl;
         }
    }
    return 0;
}

