#include<bits/stdc++.h>
using namespace std;
int main(void)
{

    int test;
    cin >> test;
    while(test--)
    {
        int n, number,flag =0,dif;
        cin >> n;
        vector <int> vec1;
        vector <int> vec2;
        vector <int> vec3;
        for(int i=1 ; i<=n ; i++)
        {
            cin >> number;
            vec1.push_back(number);
        }


        for(int i=1 ; i<=n ; i++)
        {
            cin >> number;
            vec2.push_back(number);
        }

        for(int i=0 ; i<n ; i++)
        {
            if (vec1[i] <  vec2[i] )
            {
                flag = 1 ;
                break;
            }
            else
            {
                if(vec2[i] == 0)
                {
                    vec1[i] = 0;
                }
                dif = vec1[i] -  vec2[i] ;
                vec3.push_back(dif);
            }

        }
        for(int i=1 ; i<n ; i++)
        {
            if (flag == 1)
            {
                break;
            }
            else if((vec2[i] != 0) &&  (vec2[i-1] != 0) && (vec3[i] !=  vec3[i-1])  )
            {

                flag =1 ;
                break;
            }
        }
        if(flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        vec1.clear();
        vec2.clear();
        vec3.clear();

    }
}
