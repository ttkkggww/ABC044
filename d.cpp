#include<bits/stdc++.h>
//#include<atcoder/all>
using namespace std;
using ll = long long;

ll f(ll b,ll n){
	if(b==1||b==0){
		return 0;
	}
	ll res = 0;
	while(n>0){
		res += n%b;
		n/=b;
	}
	return res;
}

int main()
{
	ll n;ll s;
	cin >> n >> s;
	if(n==s){
		cout<<n+1<<endl;
		return 0;
	}

	for(ll i = 2;i*i<=n;i++){
		if(f(i,n)==s){
			cout<<i<<endl;
			return 0;
		}
	}
	ll ans = LLONG_MAX/2;
	for(ll i = 1;i*i<=n;i++){
		ll b = (n-s)/i+1;
		if(f(b,n)==s){
			ans = min(ans,b);
		}
	}
	if(ans==LLONG_MAX/2)ans = -1;
	cout<<ans<<endl;
}
