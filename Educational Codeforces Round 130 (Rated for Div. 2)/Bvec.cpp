
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int n,q,a,sumIndex;

    cin >> n >> q;

    vector<int> v;
    vector<long long int > sumVector;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    sumVector.push_back(0);
    sumVector.push_back(v[0]);
    for(int i=1 ; i<n ; i++)
    {
        sumIndex = sumVector[i] + v[i];
        sumVector.push_back(sumIndex);
    }
    for(int i=0 ; i<n ; i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl << endl ;
    for(int i=0 ; i<=n ; i++)
    {
        cout << sumVector[i] << " " ;
    }

    for (int i=0; i<q ; i++)
    {
        int x,y,sum;
        cin >> x >> y;
        cout << sumVector[x] << " did "  << sumVector[x-y] << endl;
        sum = sumVector[x] - sumVector[x-y];
        cout << sum << endl;

    }

    return 0;
}

