#include<bits/stdc++.h>
//#include<atcoder/all>
using namespace std;
using ll = long long;

int main()
{
	ll n,k,x,y;
	cin >> n >> k >> x >> y;
	ll ans = 0;
	ans += min(n,k)*x;
	ans += max(n-k,0LL)*y;

	cout<<ans<<endl;

}
