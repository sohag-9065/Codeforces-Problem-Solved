#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,m, def = 0, ans =300,s1,s2;
        cin >> n >> m;
        string str[n];
        for(int i=0 ; i< n ; i++)
        {
            cin >> str[i];
        }
        for(int i=0 ; i< n-1 ; i++)
        {
            for(int j=i+1 ; j< n ; j++)
            {
                for(int k=0 ; k < m ; k++)
                {
                    s1 = str[i][k];
                    s2 = str[j][k];
                    def = def + abs(s1-s2);
                }
                if(def<ans)ans=def;
                def=0;
            }

        }
        cout << ans << endl;
    }
    return 0;
}
