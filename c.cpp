#include<bits/stdc++.h>
//#include<atcoder/all>
using namespace std;
using ll = long long;

ll dp[51][51][2501];

int main()
{
	int n;
	cin >> n;
	int a;
	cin >> a;
	vector<int> x(n);
	for(auto &i:x)cin >> i;
	dp[0][0][0] = 1;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<50;j++){
			for(int k = 0;k<=2500;k++){
				if(k-x[i]>=0)dp[i+1][j+1][k] += dp[i][j][k-x[i]];
				dp[i+1][j][k] += dp[i][j][k];
			}
		}
	}
	ll ans = 0;
	for(int i = 1;i<=n;i++){
		ans += dp[n][i][i*a];
	}
	cout<<ans<<endl;
}
