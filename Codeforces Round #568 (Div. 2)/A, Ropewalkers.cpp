#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[3];
	int d;
	for(int i=0;i<3;i++) cin >> a[i];
	cin >> d;
	sort(a, a+3);
	int ans = 0;

	if(a[0] > a[1] - d) ans += a[0] - a[1] + d;

	if(a[2] < a[1] + d) ans += a[1] + d - a[2];

	cout << ans << endl;
	return 0;
}
