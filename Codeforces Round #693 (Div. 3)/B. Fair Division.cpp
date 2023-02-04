

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int test,i;
    int candy[105];
    cin >> test;
    while(test--)
    {
        int  n,sum=0,resum=0,j,p=0;
        cin  >>n;
        for(j=0; j<n; j++)
        {
            cin  >>candy[j];
            sum+=candy[j];
        }
        sort(candy, candy + n);

        if(sum%2!=0)
        {
            cout << "NO" <<endl ;
            p=1;
        }
        else
        {
            sum/=2;
            //cout << sum << "  sum" <<endl ;
            for(j=n-1; j>=0; j--)
            {
                resum += candy[j];
                //cout << resum << "  resum" <<endl ;
                if(sum==resum)
                {
                    cout << "YES" <<endl ;
                    p=1;
                }
                if(sum<resum)
                {
                    resum -= candy[j];
                }
            }
        }
        if(p==0)cout << "NO" <<endl ;

    }
    return 0;

}
