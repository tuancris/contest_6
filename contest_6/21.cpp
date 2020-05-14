#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> p1,pair<int,int> p2){
	if(p1.second==p2.second)
	 return p1.first<p2.first;
	 return p1.second>p2.second;
}
void solve() {
	int n; cin >> n; int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	unordered_map<int,int> freq;
	for(auto x: a){
		freq[x]++;
	}
	vector<pair<int,int>> v;
	for(auto x:freq){
		v.push_back(make_pair(x.first,x.second));
	}
	sort(v.begin(),v.end(),cmp);
	for(auto x: v){
		while(x.second--){
			cout << x.first << " ";
		}
	}
	cout << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
    