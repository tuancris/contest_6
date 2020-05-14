#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> a; ll n, k;
ll binary() {
	ll r = n - 1, l = 0; 
    while (r >= l) {
       int mid = (l+r) / 2; // tim phan tu giua
       if (a[mid] == k) return mid; // tra ve ket qua
       if (a[mid] > k) r = mid - 1; // xet lui ve  1 don vi
       if (a[mid] < k) l = mid + 1; // xet tien sang 1 don vi
    }
    return -1; // ko co ket qua
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		a.resize(n);
		for(int i = 0; i < n; i++)
		    cin >> a[i];
		ll vt = binary();
		if(vt == -1) cout << "-1" << endl;
		else cout << "1" << endl;
	}
	return 0;
}
