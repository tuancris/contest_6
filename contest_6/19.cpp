#include <bits/stdc++.h>
using namespace std;

int n,k,a[1005];
/*int bynarysearch(int k, int left, int right){
	if(left > right)   return -1;
	int mid = (left + right) / 2;
	if(a[mid] > k)     return search(k, left, mid - 1);
	if(a[mid] < k)     return search(k, mid + 1, right);
	return mid;
}*/
void solve() {
    cin >> n; 
	for(int i=0; i<n; i++)	cin >> a[i];
	sort(a, a + n);
	int min = a[0], max = a[n - 1];
	int count = 0;
	for(int i = min + 1; i < max; i++)
		if(binary_search(a,a+n-1,i)==0)
			count++;
	cout << count << endl;
}
int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}