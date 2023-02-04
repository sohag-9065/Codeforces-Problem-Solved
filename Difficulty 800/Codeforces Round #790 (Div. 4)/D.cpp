#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin >> n >> m ;
        long long a[n][m];
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++)
            {
                cin >> a[i][j];
            }
        }
        long long ans = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                long long sum = a[i][j];
                int x = i-1, y = j-1;
                while(x>=0 and y>=0){
                    sum += a[x][y];
                    x--,y--;
                }
                x = i+1;
                y = j+1;
                while(x < n and y < m){
                    sum += a[x][y];
                    x++,y++;
                }
                x = i+1;
                y = j-1;
                while( x<n and y >= 0){
                    sum += a[x][y];
                    x++,y--;
                }
                x=i-1;
                y = j+1;
                while(x >=0 and y<m  ){
                    sum += a[x][y];
                    x--,y++;
                }
                ans = max(ans,sum);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
