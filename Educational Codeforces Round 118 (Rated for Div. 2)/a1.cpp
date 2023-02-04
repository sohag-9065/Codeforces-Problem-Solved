/*                 -> Bismillahir Rahmanir Rahim <-                */
/*
    Motto - Try Hard To become -> specialist <-  :)
*/

#include<bits/stdc++.h>
using namespace std;
//Some Hints
//Find odd and even return 1 || 0
// __builtin_parity() if x is ll use __builtin_parityll(x)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
// count how many 0 in a bynary number
#define NumOf0(x) __builtin_popcount(x)
// count how many 1 in a bynary number
#define NumOf1(x) __builtin_ctz(x)
#define   all(v)   v.begin(), v.end()
#define pi acos(-1)
typedef  long long ll;
#define MOD  1000000007
typedef  unsigned long long ull;
typedef  unsigned un;
#define Bismilla ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define In insert
#define ln "\n"

int ROW[]={+0, +0, -1, +1};
int COL[]={+1, -1, +0, +0};

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move

int KX[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
int KY[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move

// ... Don't Stop The Party ... :)


//    .... Happy New Year! to all...


int main() {
	int t;
	cin>>t;
	while (t--) {
		double a,b,x,y,num;
		cin>>a>>x>>b>>y;
		num=log10(a/b)+x-y;
		if(num==0)cout<<"=\n";
			else if(num>0)cout<<">\n";
		        else cout<<"<\n";
	}
}
