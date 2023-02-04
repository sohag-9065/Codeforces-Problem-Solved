#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 5e5+5;

int p[sz], a[sz], pos[sz];

void solve() {
   int n, m, d;

   scanf("%d %d %d", &n, &m, &d);

   for(int i=0; i<n; i++) scanf("%d", &p[i]);
   for(int i=0; i<n; i++) pos[p[i]] = i;
   for(int i=0; i<m; i++) scanf("%d", &a[i]);

   int ans = n;

   for(int i=1; i<m; i++) {
      int x = pos[a[i-1]], y = pos[a[i]];
      if(x > y or y > x + d) ans = 0;
      else {
         ans = min(ans, y - x);
         if(d < n - 1) ans = min(ans, x + d + 1 - y);
      }
   }

   printf("%d\n", ans);
}

int main() {

   int t;
   cin >> t;

   while(t--) solve();

}
