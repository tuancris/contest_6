#include <bits/stdc++.h>
int a[1000005],b[1000005];
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,h,k;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b,b+n);
		for(int i=0; i<n; i++){
			if(a[i] != b[i]){
				h = i+1;
				break;
			}
		}
		for(int i=n-1; i>h; i--){
			if(a[i] != b[i]){
				k = i+1;
				break;
			}
		}
		cout << h << " " << k << endl;
	}
	return 0;
}