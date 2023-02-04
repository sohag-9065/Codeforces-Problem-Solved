
#include <iostream>
using namespace std;


int main()
{
    int test,i,page=0;
    int candy[105]
    cin >> test;
    while(test--)
    {
        int  n,sum=0,resum=0;
        cin  >>n;
        for(j=0; j<n; j++)
        {
            cin  >>candy[i];
            sum+=candy[i];
        }
        sort(candy, candy + n);

        if(sum%2!=0)cout << "NO" <<endl ;
        else
        {
            sum/=2;
            for(j=0; j<n; j++)
            {
                resum += candy[i];
                if(sum==resum)
            }
        }
    }
    return 0;

}
