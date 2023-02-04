#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    for(int i=0;;i++){
        int su = 0;
        int ans = n+i;
        while(ans>0){
            su+=ans%10;
            ans/=10;
        }
        if(su%4==0){
            cout<<n+i<<endl;
            return 0;
        }
    }
}
