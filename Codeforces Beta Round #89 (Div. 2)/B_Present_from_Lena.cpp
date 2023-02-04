#include <bits/stdc++.h>
using namespace std;

#define optimize()  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'


int main(void)
{
    optimize();

    int i, j, rowNum, space, num=0;

    cin>>rowNum;
    space = rowNum;
    for(i=1; i<=rowNum +1; i++)
    {
        for(j=1; j<=space; j++)
            cout<<"  ";
        space--;
        for(j=1; j<=(2*i-1); j++)
        {
            cout<<num ;
            if( j > i-1)
            {
                num--;
            }
            else
            {
                num++;
            }
            if(j<=(2*i-2)){
                cout  << " ";
            }


        }
        cout<<endl;
        num = 0;
    }
    space = 1;
     for(i=1; i<=(rowNum); i++)
    {
        for(j=1; j<=space; j++)
            cout<<"  ";
        space++;
        for(j=1; j<=(2*(rowNum-i)+1); j++)
        {
            cout<<num;
           if( j > rowNum - i )
            {
                num--;
            }
            else
            {
                num++;
            }
            if( j<=(2*(rowNum-i)) ){
                cout  << " ";
            }
        }
        cout<<endl;
        num = 0;
    }
    cout<<endl;
    return 0;
}
