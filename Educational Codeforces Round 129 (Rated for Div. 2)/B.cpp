#include <bits/stdc++.h>
using namespace std;
int main( )
{
    vector<int> num;
    long long int sum=0;
     int test,i,n,m,j,mi,ans , vi;
    cin >> test;
    for(i=1; i<=test; i++)
    {
        sum=0;
        cin >> n;
        for(j=1;j<=n;j++)
        {
            cin >> vi;
            num.push_back(vi);
        }
        cin >> m;
        for(j=1;j<=m;j++)
        {
            cin >> mi;
            sum+=mi;
        }
        ans = sum % n;
        cout << num.at(ans)<< endl ;
        num.clear();

    }
    return 0;

}
