#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll m, s;
        cin>>m>>s;
        ll arr[m];
        ll sum = 0, mx = 0;
        for(ll i = 0; i < m; i++){
            ll x;
            cin>>x;
            arr[i] = x;
            sum += x;
            mx = max(mx,x);
        }

        sum += s;
        ll sm = 0, cnt = 0, i = 1;
        while(sm < sum){
            sm += i;
            cnt = i;
            i++;
        }
        if(sum != sm || mx > cnt || cnt <= m){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

    return 0;
}
