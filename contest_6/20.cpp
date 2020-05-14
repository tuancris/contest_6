#include<bits/stdc++.h>
using namespace std;
int n, k, a[100005];
/*int binarySearch(int a[], int l, int r, int x) { 
    if (r >= l) { 
        int mid = l + (r - l) / 2;  
        if (a[mid] <= x && a[mid+1] > x)  return mid;  
        if (a[mid] > x) 
            return binarySearch(a, l, mid-1, x);  
        return binarySearch(a, mid+1 , r, x); 
    } 
}*/
void solve() {
    cin >> n >> k; 
	for(int i=0; i<n; i++) cin >> a[i];
	long long ans = 0;
	sort(a, a + n); 
	for (int i = 0; i < n-1; i++) {  
	    ans = ans + upper_bound(a+i+1,a+n,k+a[i]-1) - a-i-1;// la ham tim kiem vi tri dau tien tu i+1 den n-1 > k+a[i]-1
	} 
	cout << ans << endl;
}
int main() {
	int t; cin >> t;
    while(t--) solve();
	return 0;
}