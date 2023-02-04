
#include<bits/stdc++.h>
using namespace std;
int main(void)
{

    int test;
    cin >> test;
    while(test--)
    {

        int string_size, count_one = 0,one_last_position=0;
        string test_input;
        cin >> string_size;
        cin >> test_input;
        if(test_input[0]=='1')
            {
                count_one = 1;
            }
        for(int i=1 ; i<string_size; i++)
        {
            if(test_input[i]=='1')
            {
                if( count_one == 1)
                {
                    cout << '-'  ;
                    count_one = 0;
                }
                else
                {
                     cout << '+'   ;
                    count_one++;
                }
            }
            else
            {
                 cout << '+'  ;
            }

        }
        count_one = 0;

        cout << endl ;
    }
}
