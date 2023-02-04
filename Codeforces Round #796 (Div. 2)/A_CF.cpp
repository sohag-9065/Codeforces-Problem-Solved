#include<bits/stdc++.h>
using namespace std;
#define ri int
const int maxn=2e5+10;
int a[maxn],m,n,t_case;
int main(){
	scanf("%d",&t_case);
	while(t_case--){
		scanf("%d",&n);
		if(n==1)puts("3");
		else{
			ri ans=n&-n;
			cout << ans << " t " << endl;
			if(ans==n)++ans;
			printf("%d\n",ans);
		}
	}
	return 0;
}
