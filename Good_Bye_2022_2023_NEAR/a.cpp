#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
const int asz = 1e5+7;

int a[asz];

void solve() {
   int n, m;
   scanf("%d %d", &n, &m);
   int tot = n + m;
   for(int i=0; i<tot; i++) scanf("%d", &a[i]);
   int last = a[tot - 1];
   sort(a, a + tot);
   reverse(a, a + tot);





   ll ans = 0;
   for(int i=0; i<n; i++) ans += a[i];
   if(a[n - 1] > last) ans += last - a[n - 1];
   printf("%lld\n", ans);
}

int main() {
   int t;
    cin >> t;
    while(t--) solve();
}
