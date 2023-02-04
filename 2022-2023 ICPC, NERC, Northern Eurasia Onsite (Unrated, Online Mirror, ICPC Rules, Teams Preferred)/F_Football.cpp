
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int matches, scored, conceded, draw=0, g = 0, c = 0, rm = 0;
        cin >> matches >> scored >> conceded ;


        if( matches == 1   )
        {
            draw = ( scored == conceded) ? 1 : 0;
            cout << draw << endl;
            cout <<  scored << ":" << conceded << endl;
            return 0;

        }
        else
        {
            draw =  matches - (scored + conceded)  ;
            draw = draw > 1 ? draw : 0;

            cout << draw << endl; // print number of draws matches

            for(int i = 1 ; i <= draw ; i++)
            {
                cout <<  0 << ":" << 0 << endl; // all draw match print
            }
            int remain_matches = matches -  draw; //  win or lose match

            for(int i = 1 ; i <  scored  ; i++ )
            {
                cout <<  1 << ":" << 0 << endl; // win match - 1
                g++;
                rm++;
                if(rm >= remain_matches - 2 && conceded != 0 )
                {
                    break;
                }
                else if( rm >= remain_matches - 1)
                {
                    break;
                }

            }

            if(scored != 0)
            {
                cout <<  scored  - g   << ":" << 0 << endl; // last win match
                rm++;
            }


            for(int j = 1 ; j <  remain_matches - rm   ; j++, c++)
            {
                cout <<  0 << ":" << 1 << endl; // lose match - 1
            }

            if(conceded != 0) cout << 0 << ":" << conceded - c  << endl; // lose win match
        }
    }


    return 0;
}
