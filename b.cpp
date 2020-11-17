#include<bits/stdc++.h>
//#include<atcoder/all>
using namespace std;
using ll = long long;
int cnt[26];

int main()
{
	string s;
	cin >> s;
	for(auto i:s)cnt[i-'a']++;
	for(int i = 0;i<26;i++){
		if(cnt[i]%2){
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
}
