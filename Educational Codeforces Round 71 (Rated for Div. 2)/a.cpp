#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin >> test;
    while(test--)
    {
        int buns, patties, chicken, hamburger, chicken_burge  ;
        cin >> buns >> patties >> chicken >> hamburger >> chicken_burge ;
        int mxPrice = hamburger, mxPricePattiesNum = patties ;
        int mnPrice = chicken_burge, mnPricePattiesNum = chicken ;

        if ( mxPrice < mnPrice )
        {
            mxPrice = chicken_burge, mxPricePattiesNum = chicken ;
            mnPrice = hamburger, mnPricePattiesNum = patties ;
        }
        int burgerNumber = buns / 2;
        int ans = 0;

        if ( mxPricePattiesNum > burgerNumber )
        {
            ans += ( burgerNumber *  mxPrice );
            burgerNumber = 0;
        }
        else
        {
            ans += ( mxPricePattiesNum *  mxPrice );
            burgerNumber -= mxPricePattiesNum;
        }

        if ( mnPricePattiesNum > burgerNumber )
        {
            ans += ( burgerNumber *  mnPrice );
        }
        else
        {
            ans += ( mnPricePattiesNum *  mnPrice );
        }

        cout << ans << endl;

    }
    return 0;
}

